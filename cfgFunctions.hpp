class A3PI
{
	tag = "A3PI";

	class core_systems_root
	{
		file = "core";
		class variables;
		class setup;
	};

	class core_systems_items
	{
		file = "core\items";
		class setupItems;
		class useItem;
		class dropItem;
		class pickupItem;
		class calculateWeight;
		class handleItem;
		class giveItem;
		class recieveItem;
		class itemCheck;
		class checkItem;
		class getInventory;
	};
	class core_systems_menus
	{
		file = "core\menus";
		class openInventory;
		class updateInventory;
		class openBuyVehicle;
		class spawnMenu;
		class selectSpawn;
		class updateVehicleInventory;
	};
	class core_systems_actions
	{
		file = "core\actions";
		class setupKeyHandler;
		class mine;
		class chopTree;
		class plantSeed;
		class harvestPlant;
		class dutySwitch;
		class grabKeys;
		class mineSand;
		class doAction;
		class tfrCheck;
	};
	class core_systems_sync
	{
		file = "core\sync";
		class requestRecieved;
		class updateRequest;
		class remoteRecieved;

	};
	class core_systems_interaction
	{
		file = "core\interaction";
		class InteractionButtonPressed;
		class loadInteractionRadial;
		class loadMoreInteractions;
		class InteractionSubRadial;
	};
	class core_systems_garage
	{
		file = "core\garage";
		class garageCheck;
		class openGarage;
		class storeVehicle;
		class retrieveGarage;
		class retrieveVehicle;
	};
	class core_systems_vehicle
	{
		file = "core\vehicle";
		class buyVehicle;
		class movein;
		class storeVehicleInv;
		class takeVehicleInv;
		class vehicleDamageCheck;
		class vehicleRepair;
		class pullOut;
		class openVehInv;
		class vehicleUnflip;
	};
	class core_systems_player
	{
		file = "core\player";
		class getGear;
		class setGear;
		class wipeGear;
		class survival;
		class paycheck;
		class addMagazine;
	};
	class core_systems_crafting
	{
		file = "core\crafting";
		class showGunCraftingDialog;
		class showPartsCraftingDialog;
		class checkReqs;
		class craftItem;
	};
	class core_systems_eventhandlers
	{
		file = "core\eventhandlers";
		class eventHandlers;
		class onFired;
		class handleDamage;
		class nametags;
		class handleHeal;
		class handleDisconnect;
		class handleTake;
		class killed;
		class handleDamageAdvanced;
	};
	class core_systems_refining
	{
		file = "core\refining";
		class showRefineryDialog;
		class useRefinery;
	};
	class core_systems_shop
	{
		file = "core\shops";
		class showShopDialog;
		class showCopShopDialog;
		class refreshShopDialog;
		class sellProduct;
		class buyProduct;
		class robbery;
		class robberyDialog;
		class newOpenShop;
		class newShopFillData;
		class newShopShowClass;
		class newShopPurchaseItem;
		class openVehShop;
		class purchaseVeh;
	};
	class core_systems_police
	{
		file = "core\police";
		class cuffPerson;
		class cuff;
		class restrainAdditions;
		class escort;
		class search;
		class giveTicket;
		class recieveTicket;
		class payTicket;
		class patDown;
		class itemSearch;
		class seize;
		class itemSearchPlayer;
		class createMarkers;
		class impound;
		class nearCops;
	};
	class core_systems_nonlethal
	{
		file = "core\nonlethal";
		class x26taser_effect;
		class tranqEffect;
	};
	class core_systems_bank
	{
		file = "core\bank";
		class withdraw;
		class deposit;
		class getBank;
		class showBank;
		class updateBank;
		class reloadBankDialog;
		class atmCheck;
		class handleBank;
	};

	class core_systems_licenses
	{
		file = "core\licenses";
		class checkLicense;
		class requestLicense;
		class licenseRequested;
		class licenseAction;
		class licenseState;
	};
	class core_systems_jailing
	{
		file = "core\jailing";
		class setupJail;
		class sendJail;
	};
	class core_systems_medical
	{
		file = "core\medical";
		class revive;
		class setUnconcious;
		class doa;
		class respawn;
		class respawnnow;
		class checkPlayer;
		class drugEffects;
		class drugLonglast;
		class drugTest;
		class openMedicalMenu;
		class downedMarker;
		class clearMarker;
		class createMarkersMedic;
		class bloodloss;
		class switchUI;
		class illness;
		class giveBlood;
		class recieveTreatment;
		class bloodBagDialog;
		class treat;
		class treatOptions;
		class injury;
		class treatBar;
	};
	class core_systems_admin
	{
		file = "core\admin";
		class openAdmin;
		class adminRequest;
		class adminRevive;
		class adminSpectate;
		class adminSpectateStart;
	};
	class core_systems_sys
	{
		file = "core\sys";
		class say3D;
		class doAnim;
		class arrayLowestNumber;
	};
	class core_systems_ownedStores
	{
		file = "core\ownedstores";
		class useOwnedStore;
	};
	class core_systems_factory
	{
		file = "core\factory";
		class openFactory;
		class updateFactory;
		class addtoqueueFactory;
		class updateCraftFactory;
		class findFactoryMaterialAmount;
	};
	class core_systems_jobs
	{
		file = "core\jobs";
		class switchJob;
		class quitJob;
		class towTruckerCall;
	};
};


class KillZoneKid
{
	tag = "KK";

	class core_systems_nonlethal
	{
		file = "core\nonlethal";
		class forceRagdoll;
	};
};