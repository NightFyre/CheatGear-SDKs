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
	 * BlueprintGeneratedClass Resolver_Artifact_Stats.Resolver_Artifact_Stats_C
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UResolver_Artifact_Stats_C : public UAttributeValueResolver
	{
	public:
		struct FDataTableRowHandle                                 Table_Stat;                                              // 0x0028(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		float GetValueForAttribute(class UGbxAttributeData* Attribute, class UObject* Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
