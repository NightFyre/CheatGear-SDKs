﻿#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class Party.Chatroom
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UChatroom : public UObject
	{
	public:
		class FString                                              CurrentChatRoomId;                                       // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MaxChatRoomRetries;                                      // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    NumChatRoomRetries;                                      // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CYW5[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialManager
	 * Size -> 0x0178 (FullSize[0x01A0] - InheritedSize[0x0028])
	 */
	class USocialManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_NRAT[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USocialToolkit*>                              SocialToolkits;                                          // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USocialDebugTools*                                   SocialDebugTools;                                        // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8AOU[0x140];                                 // 0x0060(0x0140) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialParty
	 * Size -> 0x0278 (FullSize[0x02A0] - InheritedSize[0x0028])
	 */
	class USocialParty : public UObject
	{
	public:
		unsigned char                                              UnknownData_MA27[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ReservationBeaconClientClass;                            // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              SpectatorBeaconClientClass;                              // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TUGC[0x10];                                  // 0x0068(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUniqueNetIdRepl                                    OwningLocalUserId;                                       // 0x0078(0x0028) HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FUniqueNetIdRepl                                    CurrentLeaderId;                                         // 0x00A0(0x0028) HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<struct FUniqueNetIdRepl, class UPartyMember*>         PartyMembersById;                                        // 0x00C8(0x0050) NativeAccessSpecifierPrivate
		bool                                                       bEnableAutomaticPartyRejoin;                             // 0x0118(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z3NS[0x77];                                  // 0x0119(0x0077) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APartyBeaconClient*                                  ReservationBeaconClient;                                 // 0x0190(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X6VL[0x8];                                   // 0x0198(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASpectatorBeaconClient*                              SpectatorBeaconClient;                                   // 0x01A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JY38[0xF8];                                  // 0x01A8(0x00F8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.PartyMember
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UPartyMember : public UObject
	{
	public:
		unsigned char                                              UnknownData_CLN7[0x40];                                  // 0x0028(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USocialUser*                                         SocialUser;                                              // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VPT7[0x80];                                  // 0x0070(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialToolkit
	 * Size -> 0x01C8 (FullSize[0x01F0] - InheritedSize[0x0028])
	 */
	class USocialToolkit : public UObject
	{
	public:
		unsigned char                                              UnknownData_LNTE[0x38];                                  // 0x0028(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USocialUser*                                         LocalUser;                                               // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class USocialUser*>                                 AllUsers;                                                // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3J9F[0x50];                                  // 0x0078(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULocalPlayer*                                        LocalPlayerOwner;                                        // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USocialChatManager*                                  SocialChatManager;                                       // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G6ZM[0x118];                                 // 0x00D8(0x0118) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialChatManager
	 * Size -> 0x01F8 (FullSize[0x0220] - InheritedSize[0x0028])
	 */
	class USocialChatManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_IL6E[0x50];                                  // 0x0028(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<TWeakObjectPtr<class USocialUser>, class USocialPrivateMessageChannel*> DirectChannelsByTargetUser;                              // 0x0078(0x0050) NativeAccessSpecifierPrivate
		TMap<class FString, class USocialChatRoom*>                ChatRoomsById;                                           // 0x00C8(0x0050) NativeAccessSpecifierPrivate
		TMap<class FString, class USocialReadOnlyChatChannel*>     ReadOnlyChannelsByDisplayName;                           // 0x0118(0x0050) NativeAccessSpecifierPrivate
		bool                                                       bEnableChatSlashCommands;                                // 0x0168(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R2T9[0x7];                                   // 0x0169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FUniqueNetIdRepl, class USocialGroupChannel*>  GroupChannels;                                           // 0x0170(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7FBQ[0x60];                                  // 0x01C0(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialChatChannel
	 * Size -> 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
	 */
	class USocialChatChannel : public UObject
	{
	public:
		unsigned char                                              UnknownData_OX7B[0xC0];                                  // 0x0028(0x00C0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialChatRoom
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	class USocialChatRoom : public USocialChatChannel
	{
	public:
		unsigned char                                              UnknownData_BMG0[0x10];                                  // 0x00E8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialDebugTools
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class USocialDebugTools : public UObject
	{
	public:
		unsigned char                                              UnknownData_F0VN[0x60];                                  // 0x0028(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialGroupChannel
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class USocialGroupChannel : public UObject
	{
	public:
		class USocialUser*                                         SocialUser;                                              // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FUniqueNetIdRepl                                    GroupId;                                                 // 0x0030(0x0028) HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FText                                                DisplayName;                                             // 0x0058(0x0018) NativeAccessSpecifierPrivate
		TArray<class USocialUser*>                                 Members;                                                 // 0x0070(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7WTS[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialPartyChatRoom
	 * Size -> 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
	 */
	class USocialPartyChatRoom : public USocialChatRoom
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialPrivateMessageChannel
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class USocialPrivateMessageChannel : public USocialChatChannel
	{
	public:
		class USocialUser*                                         TargetUser;                                              // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialReadOnlyChatChannel
	 * Size -> 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
	 */
	class USocialReadOnlyChatChannel : public USocialChatChannel
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialSettings
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class USocialSettings : public UObject
	{
	public:
		TArray<class FName>                                        OssNamesWithEnvironmentIdPrefix;                         // 0x0028(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    DefaultMaxPartySize;                                     // 0x0038(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bPreferPlatformInvites;                                  // 0x003C(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bMustSendPrimaryInvites;                                 // 0x003D(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bLeavePartyOnDisconnect;                                 // 0x003E(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DQFD[0x1];                                   // 0x003F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UserListAutoUpdateRate;                                  // 0x0040(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MinNicknameLength;                                       // 0x0044(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MaxNicknameLength;                                       // 0x0048(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GP9P[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialUser
	 * Size -> 0x0140 (FullSize[0x0168] - InheritedSize[0x0028])
	 */
	class USocialUser : public UObject
	{
	public:
		unsigned char                                              UnknownData_KFOA[0x140];                                 // 0x0028(0x0140) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
