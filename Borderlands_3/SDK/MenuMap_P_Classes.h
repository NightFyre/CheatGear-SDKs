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
	 * BlueprintGeneratedClass MenuMap_P.MenuMap_P_C
	 * Size -> 0x0068 (FullSize[0x04E0] - InheritedSize[0x0478])
	 */
	class AMenuMap_P_C : public AOakLevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0478(0x0008) Transient, DuplicateTransient
		float                                                      HandRotate_HandWave_1F698E054F47CAA58B9F56A59AAC5838;    // 0x0480(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         HandRotate__Direction_1F698E054F47CAA58B9F56A59AAC5838;  // 0x0484(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5Z5P[0x3];                                   // 0x0485(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  HandRotate;                                              // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeDownBlackScreen_Opacity_C2498BF74568401E72518FA92D5365F1; // 0x0490(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         FadeDownBlackScreen__Direction_C2498BF74568401E72518FA92D5365F1; // 0x0494(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0B49[0x3];                                   // 0x0495(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FadeDownBlackScreen;                                     // 0x0498(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UGbxAnimSet*>                                 FrontendAnimSets;                                        // 0x04A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class AStaticMeshActor*                                    BlackHoldingScreen_ExecuteUbergraph_MenuMap_P_RefProperty; // 0x04B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AMenuMapMenuFlow*                                    MenuMapMenuFlow_1_ExecuteUbergraph_MenuMap_P_RefProperty; // 0x04B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AIO_MainMenu_VaultArch_C*                            IO_MainMenu_VaultArch_1968_ExecuteUbergraph_MenuMap_P_RefProperty; // 0x04C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    SM_BillboardHand_66_ExecuteUbergraph_MenuMap_P_RefProperty; // 0x04C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AIO_MainMenu_GameModes_C*                            IO_MainMenu_GameModes_2_ExecuteUbergraph_MenuMap_P_RefProperty; // 0x04D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AIO_MainMenu_LootMode_C*                             IO_MainMenu_LootMode_2_ExecuteUbergraph_MenuMap_P_RefProperty; // 0x04D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void FadeDownBlackScreen__FinishedFunc();
		void FadeDownBlackScreen__UpdateFunc();
		void HandRotate__FinishedFunc();
		void HandRotate__UpdateFunc();
		void BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_0_MenuMapMenuFlowDelegate__DelegateSignature();
		void BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_14_MainMenuViewpointChangedDelegate__DelegateSignature(EMainMenuViewpointType MenuTransition);
		void BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_5_MenuMapPlaythroughChangedDelegate__DelegateSignature(int32_t PreviousPlayThroughCount, int32_t NewPlayThroughCount);
		void ReceiveBeginPlay();
		void BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_1_MenuMapOnDifficultyChanged__DelegateSignature(EPlayerDifficultySetting NewDifficultySetting);
		void BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_2_MenuMapOnUIGroupModeChanged__DelegateSignature(EOakGameStateUIGroupMode NewGroupMode);
		void loadBTS();
		void ExecuteUbergraph_MenuMap_P(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
