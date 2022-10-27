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
	 * BlueprintGeneratedClass MenuMap_Claptrap_Pandora3.MenuMap_Claptrap_Pandora3_C
	 * Size -> 0x0028 (FullSize[0x04A0] - InheritedSize[0x0478])
	 */
	class AMenuMap_Claptrap_Pandora3_C : public AOakLevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0478(0x0008) Transient, DuplicateTransient
		int32_t                                                    TotalPlayed;                                             // 0x0480(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxPlays;                                                // 0x0484(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AGbxLevelSequenceActor*>                      Sequences;                                               // 0x0488(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class AMenuMapClaptrapSkitControl*                         MenuMapClaptrapSkitControl_1_ExecuteUbergraph_MenuMap_Claptrap_Pandora3_RefProperty; // 0x0498(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void BndEvt__MenuMapClaptrapSkitControl_1_K2Node_ActorBoundEvent_3_OnPlaySkit__DelegateSignature();
		void BndEvt__SEQ_Claptrap_P3_Skit_2_K2Node_ActorBoundEvent_5_OnMovieSceneSequencePlayerEvent__DelegateSignature();
		void BndEvt__SEQ_Claptrap_P3_Skit_6_K2Node_ActorBoundEvent_6_OnMovieSceneSequencePlayerEvent__DelegateSignature();
		void BndEvt__SEQ_Claptrap_P3_Skit_7_K2Node_ActorBoundEvent_7_OnMovieSceneSequencePlayerEvent__DelegateSignature();
		void ExecuteUbergraph_MenuMap_Claptrap_Pandora3(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
