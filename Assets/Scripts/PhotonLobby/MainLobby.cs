using Photon.Pun;
using Photon.Realtime;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine;
using UnityEngine.UI;
public class MainLobby : MonoBehaviourPunCallbacks
{

    public InputField playerName;
    public GameObject roomPanel;

    public void Connect()
    {
        string name = playerName.text;
        if (string.IsNullOrEmpty(name))
        {
            name = "Fulano " + Guid.NewGuid();
        }

        PhotonNetwork.LocalPlayer.NickName = name;
        PhotonNetwork.ConnectUsingSettings();
    }

    public void JoinRandomRoom()
    {
        PhotonNetwork.JoinRandomRoom();
    }

    public override void OnConnectedToMaster()
    {
        roomPanel.SetActive(true);

    }
    public override void OnJoinRandomFailed(short returnCode, string message)
    {
        string room = "Sala " + Guid.NewGuid();
        RoomOptions roomOp = new RoomOptions();
        roomOp.MaxPlayers = 8;
        PhotonNetwork.CreateRoom(room, roomOp);

    }

    public override void OnJoinedRoom()
    {
        PhotonNetwork.LoadLevel("Game");
        
    }
}
