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
	 * WidgetBlueprintGeneratedClass BP_FireMode.BP_FireMode_C
	 * Size -> 0x0090 (FullSize[0x02C0] - InheritedSize[0x0230])
	 */
	class UBP_FireMode_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FadeOut;                                                 // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ShowFiremodeAnimation;                                   // 0x0240(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ChangeFiremodeAnimation;                                 // 0x0248(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              BackgroundImage;                                         // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        Container;                                               // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_FireModeRow_C*                                   FireModeAuto;                                            // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_FireModeRow_C*                                   FireModeBoltAction;                                      // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_FireModeRow_C*                                   FireModeBurst;                                           // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_FireModeRow_C*                                   FireModePump;                                            // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_FireModeRow_C*                                   FireModeSingle;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            OuterContainer;                                          // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AItemFirearm*                                        Weapon;                                                  // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeTime;                                                // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PreviousFiremode;                                        // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Visible;                                                 // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		unsigned char                                              UnknownData_AMHJ[0x3];                                   // 0x02A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentFireMode;                                         // 0x02A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VisibleTime;                                             // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAlwaysShow;                                             // 0x02AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PZ9P[0x3];                                   // 0x02AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             UpdateFiremodeContainerVisibility;                       // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void UpdateFiremodeWidgetVisibility(int32_t* OutVisibleFiremodes);
		void UpdateAlwaysShow();
		void MakeVisible();
		void ShowFiremodeFor(float LengthInSeconds);
		void UpdateFiremode(EFirearmFiremode NewFiremode);
		void WeaponChanged(class AItemEquipable* NewItem, class AItemEquipable* OldItem);
		void FadeoutEvent();
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_BP_FireMode(int32_t EntryPoint);
		void UpdateFiremodeContainerVisibility__DelegateSignature(bool bVisible);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
