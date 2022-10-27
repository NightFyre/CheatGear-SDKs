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
	 * WidgetBlueprintGeneratedClass WBP_SQMemberOption.WBP_SQMemberOption_C
	 * Size -> 0x001C (FullSize[0x0268] - InheritedSize[0x024C])
	 */
	class UWBP_SQMemberOption_C : public UWBP_HDContextualWidgetBase_C
	{
	public:
		unsigned char                                              UnknownData_V65M[0x4];                                   // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNamedSlot*                                          InsertContentHere;                                       // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_DeployMenu_SquadMemberListing_C*                ParentContainer;                                         // 0x0258(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class USquadMemberInfo*                                    ParentMemberInfo;                                        // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void GetParentMemberInfo(class USquadMemberInfo** MemberInfo);
		void SetupOption(class USquadMemberInfo* InMemberInfo);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
