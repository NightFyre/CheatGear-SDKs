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
	 * BlueprintGeneratedClass BP_Counterweight.BP_Counterweight_C
	 * Size -> 0x0008 (FullSize[0x03F8] - InheritedSize[0x03F0])
	 */
	class ABP_Counterweight_C : public AGBItem
	{
	public:
		class UStaticMeshComponent*                                SM_Counterweight;                                        // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		bool DecodeKit(class UVaRestJsonObject* ItemAsJson, class AActor* DecodedOwner, class AGBItem* DecodedParentItem);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
