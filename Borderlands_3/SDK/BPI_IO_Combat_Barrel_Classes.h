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
	 * BlueprintGeneratedClass BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_IO_Combat_Barrel_C : public UInterface
	{
	public:
		void BPI_SetNavPainterEnabled(bool Enabled);
		void BPI_ResetHealth();
		void BPI_ImpulseThrow(const struct FVector& ThrowVector, float Force, const struct FRotator& RotatorForSpin, float FuseSpeedScale, const struct FVector& AdditiveVector);
		void BPI_SetSimulatePhysics(bool PhysicsOn);
		void BPI_Explode();
		void BPI_StartFuse();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
