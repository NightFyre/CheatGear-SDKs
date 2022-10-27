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
	 * BlueprintGeneratedClass BP_Helmet_AFrame_C.BP_Helmet_AFrame_C_C
	 * Size -> 0x0010 (FullSize[0x0468] - InheritedSize[0x0458])
	 */
	class ABP_Helmet_AFrame_C_C : public ABP_HeadGear_Master_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0458(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              Chinstrap;                                               // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void OnAddingChild(class AGBItem* AddedChild);
		void ExecuteUbergraph_BP_Helmet_AFrame_C(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
