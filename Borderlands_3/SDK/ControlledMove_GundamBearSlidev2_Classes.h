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
	 * BlueprintGeneratedClass ControlledMove_GundamBearSlidev2.ControlledMove_GundamBearSlidev2_C
	 * Size -> 0x0018 (FullSize[0x08C0] - InheritedSize[0x08A8])
	 */
	class UControlledMove_GundamBearSlidev2_C : public UOakControlledMove
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x08A8(0x0008) Transient, DuplicateTransient
		class UMeshComponent*                                      NewMesh;                                                 // 0x08B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              NewInstigator;                                           // 0x08B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnStart(float MoveDuration, class AActor* TargetActor);
		void OnServerStart(float MoveDuration, class AActor* TargetActor, class AActor* Instigator);
		void ExecuteUbergraph_ControlledMove_GundamBearSlidev2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
