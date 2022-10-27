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
	 * BlueprintGeneratedClass BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C
	 * Size -> 0x004C (FullSize[0x0074] - InheritedSize[0x0028])
	 */
	class UBP_ViewPunchRecoilHandler_C : public UDFGunRecoilHandler
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0028(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      CurrentCofAngleDegrees;                                  // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      ConeOfFireAngleGrowthPerShotDegrees;                     // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxConeOfFireAngleDegrees;                               // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinConeOfFireAngleDegrees;                               // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ConeOfFireDecayRate;                                     // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DesiredCoF;                                              // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      RecoilDirection;                                         // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RecoilPunchMagnitude;                                    // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RecoilCounter;                                           // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		struct FRotator                                            InitialViewAngle;                                        // 0x0054(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		float                                                      Recoil_DX;                                               // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      Recoil_DY;                                               // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      RecoilRestitutionTime;                                   // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEasingFunc                                                VerticalRecoilEasingMode;                                // 0x006C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEasingFunc                                                HorizontalRecoilEasingMode;                              // 0x006D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I3JA[0x2];                                   // 0x006E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RecoilDT;                                                // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash

	public:
		void GetController(class AController** Controller);
		void GetControlRotation(struct FRotator* ViewRotation);
		struct FVector GetConeOfFireOffset();
		void OnWeaponFire();
		void ViewPunch();
		void OnTick(float DeltaTime);
		void ComputeConeOfFire(float DT);
		void ComputeRecoil(float DT);
		void OnWeaponStopFire();
		void OnWeaponStartFire();
		void ExecuteUbergraph_BP_ViewPunchRecoilHandler(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
