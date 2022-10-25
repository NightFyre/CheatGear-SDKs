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
	 * WidgetBlueprintGeneratedClass BP_RulesModal.BP_RulesModal_C
	 * Size -> 0x0090 (FullSize[0x02C0] - InheritedSize[0x0230])
	 */
	class UBP_RulesModal_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_KeyActionButton_C*                               BP_KeyActionButton_C_1;                                  // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BP_KeyActionButton_Scroll;                               // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RulesModalColumn_C*                              BP_RulesModalColumn;                                     // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BtnLeft;                                                 // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BtnRight;                                                // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            ColumnOverlay;                                           // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPlaylist*                                           Playlist;                                                // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    DefaultIndex;                                            // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_CZDB[0x4];                                   // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              LoadingImage[0x28];                                      // 0x0278(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UBP_RulesModalColumn_C*                              CurrentColumn;                                           // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Index;                                                   // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JBIL[0x4];                                   // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnNavigateBack;                                          // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetScrollHintOpacity();
		struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
		void AnimateThenDestroy(class UBP_RulesModalColumn_C* Widget, class UWidgetAnimation* Animation);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void NavigateDirection(int32_t Amount);
		void SelectFeature(int32_t NewIndex);
		void SetData();
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void BndEvt__BP_KeyActionButton_C_1_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
		void BndEvt__BP_KeyActionButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
		void BndEvt__BP_KeyActionButton_C_0_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature();
		void ExecuteUbergraph_BP_RulesModal(int32_t EntryPoint);
		void OnNavigateBack__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
