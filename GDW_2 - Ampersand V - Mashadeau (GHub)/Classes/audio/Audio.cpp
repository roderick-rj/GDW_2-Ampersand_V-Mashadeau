/*************************
HOW TO USE THIS ABOMINATION I CREATED

Wherever everything starts from, very top, throw in "#include "Audio.h"" (of course) and where the running code is, throw in a muhfuckin "profileSetup();" (maybe) then a "preload();"



*************************/

#include "Audio.h"

const cocos2d::experimental::AudioProfile * effectsProfile;
const cocos2d::experimental::AudioProfile * musicProfile;

void profileSetup() {
	//Audio Profiles (allows multiple audio tracks playing simultaneously)
	//effectsProfile.name = "Audio - Effects";
	//effectsProfile.maxInstances = 8;
	//effectsProfile.minDelay = 0.1f;
	//
	//musicProfile.name = "Audio - Music";
	//musicProfile.maxInstances = 1;
	//musicProfile.minDelay = 0.1f;
}

Sound::Sound(std::string _effect) {
	effect = _effect + ".mp3";
	cocos2d::experimental::AudioEngine::preload(effect); //Preloads this track
}

Sound::~Sound() {
	cocos2d::experimental::AudioEngine::uncache(effect); //Removes from cache
	delete this;
}

void Sound::play() { //This thing plays the sound effect
	id = cocos2d::experimental::AudioEngine::play2d(effect, false, 1.0f, effectsProfile);
}

void Sound::resume() {
	cocos2d::experimental::AudioEngine::resume(id);
}
void Sound::pause() {
	cocos2d::experimental::AudioEngine::pause(id);
}
void Sound::stop() {
	cocos2d::experimental::AudioEngine::stop(id);
}
void Sound::end() {
	cocos2d::experimental::AudioEngine::end();
}

Music::Music(std::string _AIN) {
	AIN = _AIN + ".mp3";
	cocos2d::experimental::AudioEngine::preload(AIN); //Preloads this track
}

Music::~Music() {
	cocos2d::experimental::AudioEngine::uncache(AIN); //Removes from cache
	delete this;
}

void Music::play() { //This will play music
	id = cocos2d::experimental::AudioEngine::play2d(AIN, true, 0.8f, musicProfile);
}

void Music::resume() {
	cocos2d::experimental::AudioEngine::resume(id);
}
void Music::pause() {
	cocos2d::experimental::AudioEngine::pause(id);
}
void Music::stop() {
	cocos2d::experimental::AudioEngine::stop(id);
}
void Music::end() {
	cocos2d::experimental::AudioEngine::end();
}

void preload() { //Preloading things
	//General Sounds
	Sound ui_confirm("ui_confirm"); //Sound played when you confirm something on UI
	Sound ui_select("ui_select"); //Selecting different options on UI

	//Player Related Sounds
	Sound plr_move("plr_move"); //Moving
	Sound plr_land("plr_land"); //Lands after falling (MAYBE?)
	Sound plr_attack("plr_attack"); //Standard attack sound
	Sound plr_death("plr_death"); //When the player dies

	//Enemy Related Sounds
	Sound ene_move("ene_move"); //Moving
	Sound ene_land("ene_land"); //Lands after falling (MAYBE?)
	Sound ene_attack("ene_attack"); //Standard attack sound
	Sound ene_death("ene_death"); //When an enemy dies
}