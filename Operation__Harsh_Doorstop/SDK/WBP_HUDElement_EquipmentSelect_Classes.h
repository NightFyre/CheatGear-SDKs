#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * WidgetBlueprintGeneratedClass WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C
	 * Size -> 0x0028 (FullSize[0x0258] - InheritedSize[0x0230])
	 */
	class UWBP_HUDElement_EquipmentSelect_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        SlotVBox;                                                // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    CurrentSlotIndex;                                        // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentSlotNum;                                          // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FFEqpSlotData>                               SlotData;                                                // 0x0248(0x0010) Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void SelectItemBySlotNum(int32_t SlotNum);
		void GetSelectedItem(struct FFEqpSlotData* OutSlotData, bool* bFoundItem);
		void GetMinSlotIndex(TArray<struct FFEqpSlotData>* SlotDataArray, int32_t* MinSlotIndex);
		void CreateAndAddEquipmentWidget(class UTexture2D* Icon, int32_t SlotNum, bool bEnabled, class AHDBaseWeapon* EqpItem);
		void ClearEquipmentList();
		void RemoveEquipmentAtSlotNum(int32_t SlotNum, bool* bRemoved);
		void RebuildEquipmentList();
		void AddEquipment(struct FHDItemEntry* EqpInfo, class AHDBaseWeapon* EqpItem);
		void SelectItem(int32_t NewSlotIndex);
		void SelectPrevItem();
		void SelectNextItem();
		void OnLoaded_B4ECD00040B15A8A41EE1DA4CE775D64(class UObject* Loaded);
		void PreConstruct(bool IsDesignTime);
		void LoadEquipmentAsset(int32_t SlotNum, class AHDBaseWeapon* EqpItem);
		void OnEquipmentListModified();
		void ExecuteUbergraph_WBP_HUDElement_EquipmentSelect(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
