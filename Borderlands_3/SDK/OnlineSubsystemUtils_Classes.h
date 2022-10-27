#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Class OnlineSubsystemUtils.BeaconChannel
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UBeaconChannel : public UChannel
	{
	public:
		unsigned char                                              UnknownData_DND0[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.DownloadableContentData
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UDownloadableContentData : public UGbxDataAsset
	{
	public:
		class UDownloadablePackageData*                            PackageData;                                             // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDownloadableContentLicenseData*                     LicenseData;                                             // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   ContentId;                                               // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GJT3[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ContentDisplayName;                                      // 0x0048(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		class FText                                                NewDLCDisplayName;                                       // 0x0060(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.DownloadableContentLicenseData
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UDownloadableContentLicenseData : public UGbxDataAsset
	{
	public:
		class UDownloadablePackageData*                            PackageData;                                             // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                LicenseName;                                             // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FText                                                DisplayName;                                             // 0x0040(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		uint32_t                                                   LicenseId;                                               // 0x0058(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AXDT[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.DownloadablePackageData
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UDownloadablePackageData : public UPrimaryDataAsset
	{
	public:
		uint32_t                                                   PackageId;                                               // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CL5L[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PackageDisplayName;                                      // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              DLCName;                                                 // 0x0048(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UDownloadableContentLicenseData*>             Licenses;                                                // 0x0058(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8SZP[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.DownloadablePackageLicenseItem
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UDownloadablePackageLicenseItem : public UDataAsset
	{
	public:
		uint32_t                                                   LicenseMask;                                             // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ADHU[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.IpNetDriver
	 * Size -> 0x0038 (FullSize[0x0578] - InheritedSize[0x0540])
	 */
	class UIpNetDriver : public UNetDriver
	{
	public:
		unsigned char                                              UnknownData_959Z[0x8];                                   // 0x0540(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              LogPortUnreach : 1;                                      // 0x0548(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AllowPlayerPortUnreach : 1;                              // 0x0548(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I5QJ[0x3];                                   // 0x0549(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   MaxPortCountToTry;                                       // 0x054C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_15BQ[0x28];                                  // 0x0550(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.IpBeaconNetDriver
	 * Size -> 0x0000 (FullSize[0x0578] - InheritedSize[0x0578])
	 */
	class UIpBeaconNetDriver : public UIpNetDriver
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.IpConnection
	 * Size -> 0x0030 (FullSize[0x19A0] - InheritedSize[0x1970])
	 */
	class UIpConnection : public UNetConnection
	{
	public:
		unsigned char                                              UnknownData_2WP9[0x28];                                  // 0x1970(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TravelTimeout;                                           // 0x1998(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_54FM[0x4];                                   // 0x199C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineBeacon
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UOnlineBeacon : public UObject
	{
	public:
		unsigned char                                              UnknownData_HDNF[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BeaconConnectionInitialTimeout;                          // 0x0038(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BeaconConnectionTimeout;                                 // 0x003C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                NetDriverName;                                           // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNetDriver*                                          NetDriver;                                               // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ASXU[0x78];                                  // 0x0050(0x0078) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineBeaconClient
	 * Size -> 0x00D0 (FullSize[0x0198] - InheritedSize[0x00C8])
	 */
	class UOnlineBeaconClient : public UOnlineBeacon
	{
	public:
		class UNetConnection*                                      BeaconConnection;                                        // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EBeaconConnectionState                                     ConnectionState;                                         // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TOTS[0xC7];                                  // 0x00D1(0x00C7) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineBeaconHost
	 * Size -> 0x00A8 (FullSize[0x0170] - InheritedSize[0x00C8])
	 */
	class UOnlineBeaconHost : public UOnlineBeacon
	{
	public:
		int32_t                                                    ListenPort;                                              // 0x00C8(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxAllowedRemotePlayers;                                 // 0x00CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5AX5[0xA0];                                  // 0x00D0(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
	{
	public:
		unsigned char                                              UnknownData_5GVJ[0xB8];                                  // 0x0028(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlinePIESettings
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UOnlinePIESettings : public UDeveloperSettings
	{
	public:
		bool                                                       bOnlinePIEEnabled;                                       // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DD5Q[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPIELoginSettingsInternal>                   Logins;                                                  // 0x0040(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineSessionClient
	 * Size -> 0x0170 (FullSize[0x0198] - InheritedSize[0x0028])
	 */
	class UOnlineSessionClient : public UOnlineSession
	{
	public:
		unsigned char                                              UnknownData_VIGJ[0x168];                                 // 0x0028(0x0168) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsFromInvite;                                           // 0x0190(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHandlingDisconnect;                                     // 0x0191(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0RRT[0x6];                                   // 0x0192(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.VoipListenerSynthComponent
	 * Size -> 0x0010 (FullSize[0x0660] - InheritedSize[0x0650])
	 */
	class UVoipListenerSynthComponent : public USynthComponent
	{
	public:
		unsigned char                                              UnknownData_UJB5[0x10];                                  // 0x0650(0x0010) MISSED OFFSET (PADDING)

	public:
		bool IsIdling();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
