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
	 * WidgetBlueprintGeneratedClass BP_LocalPlayerAvatar.BP_LocalPlayerAvatar_C
	 * Size -> 0x0050 (FullSize[0x0280] - InheritedSize[0x0230])
	 */
	class UBP_LocalPlayerAvatar_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              AvatarImg;                                               // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_540;                                               // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            SelectionOverlay;                                        // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMaterialInterface*                                  SircularThrobberMat;                                     // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsHovered;                                              // 0x0258(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W77J[0x7];                                   // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHovered;                                               // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUnhovered;                                             // 0x0270(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetDefaultAvatar();
		void OnPlatformConnectionStatusChanged(bool bConnected);
		void OnAvatarUpdated(class UTexture2D* Texture);
		void Construct();
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_BP_LocalPlayerAvatar(int32_t EntryPoint);
		void OnUnhovered__DelegateSignature();
		void OnHovered__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
