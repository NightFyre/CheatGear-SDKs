#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * BlueprintGeneratedClass BP_CharacterInterface.BP_CharacterInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_CharacterInterface_C : public UInterface
	{
	public:
		void IK_Limb_Stretch(float ArmStretch, float SpineStretch, float LegStretch);
		void IK_Limb_Active(EIKLimbName LimbId, bool Active, ELimbIKSpace CoordinateSpace);
		void IK_Limb_Update_Strength(EIKLimbName LimbId, float LocationStrength, float RotationStrength);
		void IK_Limb_Blend_Timing(EIKLimbName LimbId, float BlendIn, float BlendOut);
		void IK_Limb_Update_Transform(EIKLimbName LimbId, const struct FTransform& TransformUpdate);
		void CapstanForce(float IndividualForce, const struct FTransform& LH_IK, const struct FTransform& RH_IK, class AActor* Actor);
		void DockingInterface(const struct FBP_Docking& Docking);
		void CapstanRotationSpeed(float RotationSpeed);
		void Update_Athena_Character(class AAthenaCharacter* AthenaCharacter);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
