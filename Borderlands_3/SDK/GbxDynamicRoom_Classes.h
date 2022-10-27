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
	 * Class GbxDynamicRoom.DynamicRoomBase
	 * Size -> 0x0098 (FullSize[0x04F0] - InheritedSize[0x0458])
	 */
	class ADynamicRoomBase : public AActor
	{
	public:
		TArray<class UDynamicRoomBaseData*>                        SelectableLevels;                                        // 0x0458(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bShowRandomRoomOnStartup;                                // 0x0468(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L6YK[0x7];                                   // 0x0469(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRoomLoaded;                                            // 0x0470(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRoomUnloaded;                                          // 0x0480(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRoomVisible;                                           // 0x0490(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRoomVisibleForAllPlayers;                              // 0x04A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FDynamicRoomReplicationInfo                         RoomInfoToLoad;                                          // 0x04B0(0x0010) Net, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		struct FDynamicRoomInstanceInfo                            InstanceInfo;                                            // 0x04C0(0x0018) NoDestructor, NativeAccessSpecifierPublic
		class UBillboardComponent*                                 SpriteComponent;                                         // 0x04D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDynamicRoomBaseData*                                CachedRoomDataReference;                                 // 0x04E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P8DS[0x8];                                   // 0x04E8(0x0008) MISSED OFFSET (PADDING)

	public:
		bool VisibleForAllPlayers();
		void UnloadRoom();
		void SelectedRoomVisible();
		void SelectedRoomLoaded();
		void SelectedRoomClassLoaded();
		void OnRep_RoomInfoToLoad(struct FDynamicRoomReplicationInfo* OldRoomInfoToLoad);
		void InstanceRoom(class UDynamicRoomBaseData* RoomToLoad);
		void InstanceRandomRoom();
		void GetPlayersInLevel(TArray<class AGbxCharacter*>* Players);
		class UDynamicRoomBaseData* GetCurrentRoomData();
		void GetAvailableRoomData(TArray<class UDynamicRoomBaseData*>* AvailableRooms);
		void AllPlayerVisibilityTest();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDynamicRoom.DynamicRoomBaseData
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UDynamicRoomBaseData : public UGbxDataAsset
	{
	public:
		class FText                                                DisplayName;                                             // 0x0030(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0048(0x0018) Edit, NativeAccessSpecifierPublic
		unsigned char                                              PreviewPicture[0x28];                                    // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GbxDynamicRoom.DynamicRoomBaseData.PreviewPicture

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDynamicRoom.DynamicRoomLevelData
	 * Size -> 0x0018 (FullSize[0x00A0] - InheritedSize[0x0088])
	 */
	class UDynamicRoomLevelData : public UDynamicRoomBaseData
	{
	public:
		struct FSoftObjectPath                                     DynamicRoomAssetName;                                    // 0x0088(0x0018) Edit, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDynamicRoom.DynamicRoomActor
	 * Size -> 0x0000 (FullSize[0x0458] - InheritedSize[0x0458])
	 */
	class ADynamicRoomActor : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDynamicRoom.DynamicRoomActorData
	 * Size -> 0x0018 (FullSize[0x00A0] - InheritedSize[0x0088])
	 */
	class UDynamicRoomActorData : public UDynamicRoomBaseData
	{
	public:
		struct FSoftClassPath                                      DynamicRoomAssetName;                                    // 0x0088(0x0018) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void HandleDynamicRoomActorSpawned(class AActor* SpawnedActor, int32_t InstanceIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDynamicRoom.DynamicRoomModuleSettings
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDynamicRoomModuleSettings : public UObject
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
