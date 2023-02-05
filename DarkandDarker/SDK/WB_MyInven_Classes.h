#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * WidgetBlueprintGeneratedClass WB_MyInven.WB_MyInven_C
	 * Size -> 0x0028 (FullSize[0x03D0] - InheritedSize[0x03A8])
	 */
	class UWB_MyInven_C : public UWB_ContainerInventoryGroupBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetSwitcher*                                     Switcher_EquipOrStorage;                                 // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_MyInvenEquipments_C*                             WB_Equipments;                                           // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_TabMyEquipments_C*                               WB_MyEquipments;                                         // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_TabMyStorage_C*                                  WB_MyStorage_01;                                         // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void OnMessageReceived_5AC46FC14F5308C86CAA6FA2B9CFA42D(class UMsgBaseNode* ProxyObject);
		void Construct();
		void EventFMsgWidgetPlayerInventoryTabActiveNotify(const struct FMsgWidgetPlayerInventoryTabActiveNotify& Msg);
		void ExecuteUbergraph_WB_MyInven(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
