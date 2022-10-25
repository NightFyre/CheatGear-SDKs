#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * BlueprintGeneratedClass FrontEndMap_NEW.FrontEndMap-NEW_C
	 * Size -> 0x0050 (FullSize[0x0278] - InheritedSize[0x0228])
	 */
	class AFrontEndMap_NEW_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Music;                                                   // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FSoftObjectPath>                             KitAssetList;                                            // 0x0238(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UVaRestJsonObject*                                   KitJsonObj_MainMenuGuy_01;                               // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UVaRestJsonObject*                                   KitJsonObj_MainMenuGuy_02;                               // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bWantsToHideLoadingScreen;                               // 0x0258(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bFinishedSettingupCharacters;                            // 0x0259(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LNRO[0x6];                                   // 0x025A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Character_C*                                     MainMenuGuy_02_ExecuteUbergraph_FrontEndMap_NEW_RefProperty; // 0x0260(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class ABP_Character_C*                                     MainMenuGuy_01_ExecuteUbergraph_FrontEndMap_NEW_RefProperty; // 0x0268(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class ABP_GBSkyActor_C*                                    BP_GBSkyActor_0_ExecuteUbergraph_FrontEndMap_NEW_RefProperty; // 0x0270(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void OnLoaded_1A4CED1E46EF51B6EDF1F79DA4FAFF65(class UClass* Loaded);
		void OnLoaded_02F90FA24A0CBC8E5F1202960DCC2151(class UObject* Loaded);
		void ReceiveBeginPlay();
		void ShowMenu();
		void SetupCharacters();
		void EquipFirearm(class AGBCharacter* Character);
		void SetupNVG(class AGBCharacter* Character);
		void BindOnLoadingScreenEvent();
		void OnLoadingScreenEvent_Event(const class FName& Event);
		void HideStartupScreen();
		void OnKitAsssetListLoaded_Event(TArray<class UObject*> LoadedAssets);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void PlayIdles();
		void ExecuteUbergraph_FrontEndMap_NEW(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
