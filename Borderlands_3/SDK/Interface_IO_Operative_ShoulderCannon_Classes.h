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
	 * BlueprintGeneratedClass Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInterface_IO_Operative_ShoulderCannon_C : public UInterface
	{
	public:
		void OperativeShoulderCannonCreateLightProjectile(bool* res);
		void OperativeShoulderCannonSetState(EOperativeShoulderCannon NewState, bool* res);
		void OperativeShoulderCannonReload(bool Start);
		void OperativeRemoveShoulderCannon(bool Fast);
		void OperativeShoulderCannonDigistructFinished(bool DigistructIn, bool* res);
		void OperativeFireShoulderCannon(bool* res);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
