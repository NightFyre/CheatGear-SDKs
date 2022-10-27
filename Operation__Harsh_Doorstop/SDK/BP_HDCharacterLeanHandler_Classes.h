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
	 * BlueprintGeneratedClass BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C
	 * Size -> 0x0030 (FullSize[0x02B0] - InheritedSize[0x0280])
	 */
	class UBP_HDCharacterLeanHandler_C : public UDFCharacterLeanHandler
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCameraComponent*                                    CachedFPPCamera;                                         // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              CachedFPPMesh;                                           // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastLeanRollAmt;                                         // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastXOffset;                                             // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastYOffset;                                             // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GCB0[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USpringArmComponent*                                 CachedFPPSpringArm;                                      // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TickRot(float DeltaTime);
		void TickYOffset(float DeltaTime);
		void TickXOffset(float DeltaTime);
		void GetFPPSpringArmComp(class USpringArmComponent** FPPSpringArm);
		void GetFPPCameraComp(class UCameraComponent** FPPCamera);
		void GetFPPMeshComp(class USkeletalMeshComponent** FPPMesh);
		void ReceiveTick(float DeltaTime);
		void ExecuteUbergraph_BP_HDCharacterLeanHandler(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
