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
	 * BlueprintGeneratedClass BP_Suppressor_Master.BP_Suppressor_Master_C
	 * Size -> 0x0010 (FullSize[0x0430] - InheritedSize[0x0420])
	 */
	class ABP_Suppressor_Master_C : public AGBMuzzleDevice
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0420(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                SuppressorS01;                                           // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void OnBeingUnequipped();
		void OnBeingEquipped();
		void ExecuteUbergraph_BP_Suppressor_Master(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
