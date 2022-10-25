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
	 * BlueprintGeneratedClass IBPChar_Siren.IBPChar_Siren_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIBPChar_Siren_C : public UInterface
	{
	public:
		void GetSoulSapProjectile(class UClass** res);
		void GetStillnessOfMindControlledMove(class UClass** res);
		void SirenHasAscendantSkill(bool* res);
		void GetSirenGhostArmsComponent(class UGbxSkeletalMeshComponent** rd_Person_Mesh, class UGbxSkeletalMeshComponent** st_Person_Mesh);
		void SetArmsElement(EPhaseTranceElementalType Type);
		void PlayTattooFade(bool bVisible);
		void SetArmsMaterial(class UMaterialInstance* Material);
		void Play3rdPersonArmFade(bool bInstant, bool bVisible);
		void GetPhaseCastProjectileComponents(class USkeletalMeshComponent** Body, class UGbxSkeletalMeshComponent** Head, class USkeletalMeshComponent** GhostArms);
		void GetSirenArmsReference(class UGbxSkeletalMeshComponent** Skel_Mesh_rd, class UGbxSkeletalMeshComponent** Skel_Mesh_st);
		void GetPhaseTranceAbility(class UOakActionAbility_PhaseTrance** res);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
