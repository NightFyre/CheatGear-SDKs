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
	 * WidgetBlueprintGeneratedClass WB_PlayServerList.WB_PlayServerList_C
	 * Size -> 0x00E8 (FullSize[0x0378] - InheritedSize[0x0290])
	 */
	class UWB_PlayServerList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWB_PlayServerSlot_C*                                WB_PlayServerSlot_ASIA_KR;                               // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_PlayServerSlot_C*                                WB_PlayServerSlot_ASIA_SINGAPORE;                        // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_PlayServerSlot_C*                                WB_PlayServerSlot_ASIA_SYDNEY;                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_PlayServerSlot_C*                                WB_PlayServerSlot_EU_FRANKFURT;                          // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_PlayServerSlot_C*                                WB_PlayServerSlot_SA_SAOPAULO;                           // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_PlayServerSlot_C*                                WB_PlayServerSlot_US_OREGON;                             // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_PlayServerSlot_C*                                WB_PlayServerSlot_US_VERGINIA;                           // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                US_Oregon;                                               // 0x02D0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                USVirginia;                                              // 0x02E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                EUFrankfurt;                                             // 0x0300(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                AsiaSeoul;                                               // 0x0318(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                AsiaSingapore;                                           // 0x0330(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                AsiaSydney;                                              // 0x0348(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                SASaopaulo;                                              // 0x0360(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnMessageReceived_7172E9EE4DA5DD00C039D2B7A9C527C0(class UMsgBaseNode* ProxyObject);
		void Construct();
		void ClickedServerSlotEUCentral();
		void OnClickedRegionList(int32_t RegionIndex);
		void ClickedServerSlotUSWest();
		void ClickedServerSlotUSEast();
		void ClickedServerSlotAsiaKR();
		void ClickedServerSlotAsisSingapore();
		void ClickedServerSlotAsiaSydney();
		void ClickedServerSlotSaopaulo();
		void ExecuteUbergraph_WB_PlayServerList(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
