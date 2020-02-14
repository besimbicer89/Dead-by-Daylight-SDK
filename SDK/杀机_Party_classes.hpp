#pragma once

// ����ɱ�� (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ɱ��_Party_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Party.Chatroom
// 0x0030 (0x0060 - 0x0030)
class UChatroom : public UObject
{
public:
	struct FString                                     CurrentChatRoomId;                                        // 0x0030(0x0010) (ZeroConstructor)
	int                                                MaxChatRoomRetries;                                       // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumChatRoomRetries;                                       // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Party.Chatroom"));

		return ptr;
	}

};


// Class Party.SocialManager
// 0x0168 (0x0198 - 0x0030)
class USocialManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET
	TArray<class USocialToolkit*>                      SocialToolkits;                                           // 0x0048(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x140];                                     // 0x0058(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Party.SocialManager"));

		return ptr;
	}

};


// Class Party.SocialParty
// 0x0230 (0x0260 - 0x0030)
class USocialParty : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET
	class UClass*                                      ReservationBeaconClientClass;                             // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0068(0x0010) MISSED OFFSET
	struct FUniqueNetIdRepl                            OwningLocalUserId;                                        // 0x0078(0x0028)
	struct FUniqueNetIdRepl                            CurrentLeaderId;                                          // 0x00A0(0x0028)
	TMap<struct FUniqueNetIdRepl, class UPartyMember*> PartyMembersById;                                         // 0x00C8(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x78];                                      // 0x0118(0x0078) MISSED OFFSET
	class APartyBeaconClient*                          ReservationBeaconClient;                                  // 0x0190(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC8];                                      // 0x0198(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Party.SocialParty"));

		return ptr;
	}

};


// Class Party.PartyMember
// 0x00B0 (0x00E0 - 0x0030)
class UPartyMember : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET
	class USocialUser*                                 SocialUser;                                               // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0078(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Party.PartyMember"));

		return ptr;
	}

};


// Class Party.SocialToolkit
// 0x01A0 (0x01D0 - 0x0030)
class USocialToolkit : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET
	class USocialUser*                                 LocalUser;                                                // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class USocialUser*>                         AllUsers;                                                 // 0x0070(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0080(0x0050) MISSED OFFSET
	class ULocalPlayer*                                LocalPlayerOwner;                                         // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class USocialChatManager*                          SocialChatManager;                                        // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF0];                                      // 0x00E0(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Party.SocialToolkit"));

		return ptr;
	}

};


// Class Party.SocialChatManager
// 0x01A8 (0x01D8 - 0x0030)
class USocialChatManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET
	TMap<TWeakObjectPtr<class USocialUser>, class USocialPrivateMessageChannel*> DirectChannelsByTargetUser;                               // 0x0080(0x0050) (ZeroConstructor)
	TMap<struct FString, class USocialChatRoom*>       ChatRoomsById;                                            // 0x00D0(0x0050) (ZeroConstructor)
	TMap<struct FString, class USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName;                            // 0x0120(0x0050) (ZeroConstructor)
	bool                                               bEnableChatSlashCommands;                                 // 0x0170(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x67];                                      // 0x0171(0x0067) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Party.SocialChatManager"));

		return ptr;
	}

};


// Class Party.SocialChatChannel
// 0x00C0 (0x00F0 - 0x0030)
class USocialChatChannel : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0030(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Party.SocialChatChannel"));

		return ptr;
	}

};


// Class Party.SocialChatRoom
// 0x0010 (0x0100 - 0x00F0)
class USocialChatRoom : public USocialChatChannel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Party.SocialChatRoom"));

		return ptr;
	}

};


// Class Party.SocialPartyChatRoom
// 0x0000 (0x0100 - 0x0100)
class USocialPartyChatRoom : public USocialChatRoom
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Party.SocialPartyChatRoom"));

		return ptr;
	}

};


// Class Party.SocialPrivateMessageChannel
// 0x0008 (0x00F8 - 0x00F0)
class USocialPrivateMessageChannel : public USocialChatChannel
{
public:
	class USocialUser*                                 TargetUser;                                               // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Party.SocialPrivateMessageChannel"));

		return ptr;
	}

};


// Class Party.SocialReadOnlyChatChannel
// 0x0000 (0x00F0 - 0x00F0)
class USocialReadOnlyChatChannel : public USocialChatChannel
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Party.SocialReadOnlyChatChannel"));

		return ptr;
	}

};


// Class Party.SocialSettings
// 0x0018 (0x0048 - 0x0030)
class USocialSettings : public UObject
{
public:
	TArray<struct FName>                               OssNamesWithEnvironmentIdPrefix;                          // 0x0030(0x0010) (ZeroConstructor, Config)
	int                                                DefaultMaxPartySize;                                      // 0x0040(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bPreferPlatformInvites;                                   // 0x0044(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Party.SocialSettings"));

		return ptr;
	}

};


// Class Party.SocialUser
// 0x0110 (0x0140 - 0x0030)
class USocialUser : public UObject
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0030(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Party.SocialUser"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
