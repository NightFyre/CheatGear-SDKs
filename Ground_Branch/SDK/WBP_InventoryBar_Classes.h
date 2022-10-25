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
	 * WidgetBlueprintGeneratedClass WBP_InventoryBar.WBP_InventoryBar_C
	 * Size -> 0x0045 (FullSize[0x02A5] - InheritedSize[0x0260])
	 */
	class UWBP_InventoryBar_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      HorizontalBox_InventoryBar;                              // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_InventoryBar_Heading_C*                         WBP_InventoryBar_Equipment;                              // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_InventoryBar_Heading_C*                         WBP_InventoryBar_Grenades;                               // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_InventoryBar_Heading_C*                         WBP_InventoryBar_Primary;                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_InventoryBar_Heading_C*                         WBP_InventoryBar_Sidearm;                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class FName>                                        SlingPoints;                                             // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    CurrentSlot;                                             // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bActionsBound;                                           // 0x02A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GenerateEntries(int32_t InventorySlot, class UWBP_InventoryBar_SubMenu_Content_C* SubMenuContent);
		void GetItemsByItemSlot(int32_t InventorySlot, TArray<class AGBItem*>* ItemsInSlot1);
		void Select(int32_t Index, bool bImmediate);
		void Cycle(bool bNext, bool bRestricted);
		void SetSlingPoints();
		void PopulateSubMenu(int32_t Index, class UWBP_InventoryBar_SubMenu_Content_C* SubMenuContent);
		void Construct();
		void OnCycleCat_Event_1(bool bNext);
		void BindActions();
		void OnNextPosPressed_Event();
		void OnPrevPosPressed_Event();
		void HideInventoryBar();
		void ShowInventoryBar();
		void OnUseMainHandPressed_Event();
		void OnUseMainHandRelease_Event();
		void OnUseOffHandPressed_Event();
		void OnUseOffHandReleased_Event();
		void ExecuteUbergraph_WBP_InventoryBar(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
