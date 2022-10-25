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
	 * WidgetBlueprintGeneratedClass BP_GameHUD.BP_GameHUD_C
	 * Size -> 0x0081 (FullSize[0x0349] - InheritedSize[0x02C8])
	 */
	class UBP_GameHUD_C : public UGameHUD
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_ActiveObjectiveDisplay_C*                        ActiveObjectiveDisplay;                                  // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_AmmoCount_C*                                     AmmoCount;                                               // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Compass_C*                                       BP_Compass;                                              // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_FireSupportIndicator_C*                          BP_FireSupportIndicator;                                 // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KillerInfo_C*                                    BP_KillerInfo;                                           // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_LessonHint_C*                                    BP_LessonHint;                                           // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_LessonHint_C*                                    BP_LessonHint_Centered;                                  // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_VoiceChat_C*                                     BP_VoiceChat;                                            // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_WeaponSelection_Gamepad_C*                       BP_WeaponSelection_Gamepad;                              // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Widget_RestrictedAreaWarning_C*                  BP_Widget_RestrictedAreaWarning;                         // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_ContextualHUDHintContainer_C*                    ContextualHUDHintContainer;                              // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_ObjectiveBriefing_C*                             ObjectiveBriefing;                                       // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_WeaponSelection_C*                               WeaponSelection;                                         // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        WrapCanvas;                                              // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RoundVictory_C*                                  RoundOverScreen;                                         // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bLoadoutVisible;                                         // 0x0348(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		class UWidget* DoCreateRoundVictory(const struct FPlayerRoundOverData& UIData);
		class UWidget* DoCreateDamageIndicator(const struct FVector& HitSource, float Damage);
		void OnQueueObjectiveBriefing();
		void OnExitSpawnZone();
		void DoMapVoteStarted();
		void ToggleResupplyVisibility(bool bNewVisibility);
		void OnInGameMenuVisibleDelegate(bool bNewVisibility);
		void Construct();
		void ExecuteUbergraph_BP_GameHUD(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
