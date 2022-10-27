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
	 * WidgetBlueprintGeneratedClass WBP_SQOption.WBP_SQOption_C
	 * Size -> 0x001C (FullSize[0x0268] - InheritedSize[0x024C])
	 */
	class UWBP_SQOption_C : public UWBP_HDContextualWidgetBase_C
	{
	public:
		unsigned char                                              UnknownData_IRI9[0x4];                                   // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNamedSlot*                                          InsertContentHere;                                       // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_DeployMenu_SquadList_C*                         ParentContainer;                                         // 0x0258(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class USquadListEntry*                                     ParentSquadData;                                         // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void GetParentSquadData(class USquadListEntry** SquadData);
		void SetupOption(class USquadListEntry* InSquadData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
