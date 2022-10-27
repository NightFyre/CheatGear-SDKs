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
	 * BlueprintGeneratedClass BPI_PetLoader.BPI_PetLoader_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_PetLoader_C : public UInterface
	{
	public:
		void PetLoader_GetType(Enum_PetLoader_Variations* LoaderType);
		void PetLoader_SetImmuneToPhaselock(bool bIsImmune);
		void PetLoader_StartLaserCharge();
		void PetLoaderRIOT_ShieldHit();
		void PetLoader_IsUnboxSpawning(bool IsUnboxing);
		void PetLoaderBadass_AnticipateLaserBall();
		void PetLoaderBadass_ThrowLaserBall();
		void PetLoader_ToggleHandGrip(bool IsActive);
		void PetLoader_isSpawningSurveyor(bool* IsSpawningSurveyor);
		void PetLoader_StopSpawningSurveyor(bool FinishedWithSuccess);
		void PetLoader_StartSpawningSurveyor();
		void PetLoaderBadass_LaserGround();
		void PetLoaderRIOT_ChargeEnd();
		void PetLoaderRIOT_ChargeStart();
		void PetLoaderRPG_ShootMissile();
		void PetLoaderRPG_isMissileBarrageDone(bool* isDone);
		void PetLoaderRIOT_ShieldDestroyed();
		void PetLoaderRIOT_ThrowShield();
		void PetLoader_SetProjectedIcon(Enum_PetLoader_ProjectedIcons Icon);
		void PetLoaderEXP_SelfDestruct();
		void PetLoaderEXP_Explode();
		void PetLoader_StartLaser();
		void PetLoader_EnterCrawlingState();
		void PetLoader_JumpEnd();
		void PetLoader_JumpStart();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
