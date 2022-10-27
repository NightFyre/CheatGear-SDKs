#pragma once

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
	 * Class MagicLeapARPin.MagicLeapARPinComponent
	 * Size -> 0x0130 (FullSize[0x0320] - InheritedSize[0x01F0])
	 */
	class UMagicLeapARPinComponent : public USceneComponent
	{
	public:
		class FString                                              ObjectUID;                                               // 0x01F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UserIndex;                                               // 0x0200(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMagicLeapAutoPinType                                      AutoPinType;                                             // 0x0204(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldPinActor;                                         // 0x0205(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HZIH[0x2];                                   // 0x0206(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PinDataClass;                                            // 0x0208(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPersistentEntityPinned;                                // 0x0210(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPersistentEntityPinLost;                               // 0x0220(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FGuid                                               PinnedCFUID;                                             // 0x0230(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     PinnedSceneComponent;                                    // 0x0240(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMagicLeapARPinSaveGame*                             PinData;                                                 // 0x0248(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JNAU[0xD0];                                  // 0x0250(0x00D0) MISSED OFFSET (PADDING)

	public:
		void UnPin();
		bool PinSceneComponent(class USceneComponent* ComponentToPin);
		bool PinRestoredOrSynced();
		bool PinActor(class AActor* ActorToPin);
		void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced);
		void PersistentEntityPinLost__DelegateSignature();
		bool IsPinned();
		bool GetPinState(struct FMagicLeapARPinState* State);
		bool GetPinnedPinID(struct FGuid* PinID);
		class UMagicLeapARPinSaveGame* GetPinData(class UClass* PinDataClass);
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UnBindToOnMagicLeapARPinUpdatedDelegate(const class FScriptDelegate& Delegate);
		bool STATIC_IsTrackerValid();
		EMagicLeapPassableWorldError STATIC_GetNumAvailableARPins(int32_t* Count);
		EMagicLeapPassableWorldError STATIC_GetClosestARPin(const struct FVector& SearchPoint, struct FGuid* PinID);
		EMagicLeapPassableWorldError STATIC_GetAvailableARPins(int32_t NumRequested, TArray<struct FGuid>* Pins);
		class FString STATIC_GetARPinStateToString(const struct FMagicLeapARPinState& State);
		EMagicLeapPassableWorldError STATIC_GetARPinState(const struct FGuid& PinID, struct FMagicLeapARPinState* State);
		bool STATIC_GetARPinPositionAndOrientation_TrackingSpace(const struct FGuid& PinID, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment);
		bool STATIC_GetARPinPositionAndOrientation(const struct FGuid& PinID, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment);
		EMagicLeapPassableWorldError STATIC_DestroyTracker();
		EMagicLeapPassableWorldError STATIC_CreateTracker();
		void STATIC_BindToOnMagicLeapARPinUpdatedDelegate(const class FScriptDelegate& Delegate);
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapARPin.MagicLeapARPinSettings
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UMagicLeapARPinSettings : public UObject
	{
	public:
		float                                                      UpdateCheckFrequency;                                    // 0x0028(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMagicLeapARPinState                                OnUpdatedEventTriggerDelta;                              // 0x002C(0x0010) Edit, Config, GlobalConfig, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QEG4[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapARPin.MagicLeapARPinSaveGame
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UMagicLeapARPinSaveGame : public USaveGame
	{
	public:
		struct FGuid                                               PinnedID;                                                // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KRDE[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          ComponentWorldTransform;                                 // 0x0040(0x0030) Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          PinTransform;                                            // 0x0070(0x0030) Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
