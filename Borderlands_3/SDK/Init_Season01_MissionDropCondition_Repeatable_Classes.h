#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * BlueprintGeneratedClass Init_Season01_MissionDropCondition_Repeatable.Init_Season01_MissionDropCondition_Repeatable_C
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UInit_Season01_MissionDropCondition_Repeatable_C : public UAttributeInitializer
	{
	public:
		class UGbxCondition*                                       ConditionIsSeasonObjActive;                              // 0x0030(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FDataTableValueHandle                               ItemDropChance;                                          // 0x0038(0x0018) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn

	public:
		float CalculateAttributeInitialValue(class UObject* Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
