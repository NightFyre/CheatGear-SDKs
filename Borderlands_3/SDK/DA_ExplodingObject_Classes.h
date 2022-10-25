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
	 * BlueprintGeneratedClass DA_ExplodingObject.DA_ExplodingObject_C
	 * Size -> 0x00DC (FullSize[0x010C] - InheritedSize[0x0030])
	 */
	class UDA_ExplodingObject_C : public UGbxDataAssetBlueprintable
	{
	public:
		int32_t                                                    DamageTypes;                                             // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KO66[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         Mesh;                                                    // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   Material;                                                // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UStaticMesh*>                                 RemnantMesh;                                             // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<Enum_ExplodingObjectDamage, class UMaterialInstance*> RemnantMaterial;                                         // 0x0058(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<Enum_ExplodingObjectDamage, class UDA_ExplodingObjectPresentation_C*> Explosion;                                               // 0x00A8(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UItemPoolListData*                                   ItemPool;                                                // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SimulatePhysics;                                         // 0x0100(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_351U[0x3];                                   // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FuseDuration;                                            // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExplodedDuration;                                        // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
