/* Author: Manning, Chad
* Assignment: Programming Assignment Five
* Course: COMP B19C
* Instructor: Richard Miles
* Date submitted: 2016/11/29
*/

#ifndef PLAYLIST_H
#define PLAYLIST_H
#include <iostream>
#include <cstring>
using namespace std;

class PlaylistNode {
	public: PlaylistNode(string initID = "", string initSongName = "Unknown", string initArtistName = "Unknown", int initLength = 0, PlaylistNode* initLoc = 0);
			string GetID();
			string GetSongName();
			string GetArtistName();
			PlaylistNode* GetNextNode();
			int GetSongLength();
			int GetPlaylistSongLength();
			PlaylistNode* AddSong(PlaylistNode* headNode);
			void DeleteSong(PlaylistNode* entryNode);
			void PrintPlaylistNode();
			void PrintPlaylist(PlaylistNode* headObj);
			void PrintSongByArtist();
			void InsertAfter(PlaylistNode* nodeLoc);
			void ChangePositions(PlaylistNode* headNode);
			void OutputToFile();
			string CheckID(string checkNodeID, PlaylistNode* tailNode, PlaylistNode* headNode);

	private:
	string uniqueID;
	string songName;
	string artistName;
	int songLength;
	PlaylistNode* nextNodePtr;

	};

#endif
 