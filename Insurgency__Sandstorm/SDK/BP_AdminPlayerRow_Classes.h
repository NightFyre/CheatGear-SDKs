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
	 * WidgetBlueprintGeneratedClass BP_AdminPlayerRow.BP_AdminPlayerRow_C
	 * Size -> 0x0040 (FullSize[0x0270] - InheritedSize[0x0230])
	 */
	class UBP_AdminPlayerRow_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_INSButton_C*                                     ButtonBan10M;                                            // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     ButtonBan1D;                                             // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     ButtonBan1H;                                             // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     ButtonBanPerm;                                           // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     ButtonKick;                                              // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PlayerNameText;                                          // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class APlayerState*                                        PlayerState;                                             // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void BanPlayer(float Duration);
		void BndEvt__ButtonKick_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
		void Construct();
		void BndEvt__ButtonBan10M_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
		void BndEvt__ButtonBan1H_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature();
		void BndEvt__ButtonBan1D_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
		void BndEvt__ButtonBanPerm_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature();
		void ExecuteUbergraph_BP_AdminPlayerRow(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
