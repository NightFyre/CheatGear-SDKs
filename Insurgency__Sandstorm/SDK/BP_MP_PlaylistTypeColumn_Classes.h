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
	 * WidgetBlueprintGeneratedClass BP_MP_PlaylistTypeColumn.BP_MP_PlaylistTypeColumn_C
	 * Size -> 0x00D0 (FullSize[0x0300] - InheritedSize[0x0230])
	 */
	class UBP_MP_PlaylistTypeColumn_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    OnHover;                                                 // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UButton*                                             Button_1;                                                // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             HoverBackground;                                         // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImageHeader;                                             // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextDesc;                                                // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextTitle;                                               // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Title;                                                   // 0x0268(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                Desc;                                                    // 0x0280(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class UTexture2D*                                          Header;                                                  // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnPressed;                                               // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSlateColor                                         ColorTextNormal;                                         // 0x02B0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         ColorTextHover;                                          // 0x02D8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void SetHoverStyle(bool bNowHovering);
		void ApplyData();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void ExecuteUbergraph_BP_MP_PlaylistTypeColumn(int32_t EntryPoint);
		void OnPressed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
