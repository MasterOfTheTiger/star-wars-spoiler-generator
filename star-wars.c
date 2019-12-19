// The author of this code waives all rights over it with the CC0-1.0 legal tool.
// The text is derived from xkcd.com/2243 by Randall Monroe, licensed under the Creative Commons Attribution-NonCommercial 2.5 License 

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const char *VILLAINS[5] = {"Kyle Ren", "Malloc", "Darth Sebelius", "Theranos", "Lord Juul"};

const char *FRIENDS[5] = {"Kim Spacemeasurer", "Teen Yoda", "Dab Tweetdeck", "Yaz Progestin", "TI-83"};

const char *LIGHTSABER_COLORS[5] = {"beige", "ochre", "mauve", "aquamarine", "taupe"};

const char *WEAPONS[5] = {"Sun Obliterator", "Moonsquisher", "World Eater", "Planet Zester", "Superconducting Supercollider"};

const char *WEAPON_CAPABILITIES[5] = {
	"blowing up a planet with a bunch of beams of energy that combine into one",
	"blowing up a bunch of planets with one beam of energy that splits into many",
	"cutting a planet in half and smashing the halves together like two cymbals",
	"increasing the CO2 levels in a planet's atmosphere, causing rapid heating",
	"triggering the end credits before the movie is done"
};

const char *OLD_ENEMIES[5] = {"Boba Fett", "Salacious Crumb", "The Space Slug", "the bottom half of Darth Maul", "YouTube commenters"};

const char *BATTLE_FEATURES[5] = {
	"a bow that shoots little lightsaber-headed arrows",
	"X-Wings and TIE fighters dodging the giant letters of the opening crawl",
	"a Sith educational display that uses Force Lightning to demonstrate the dielectric breakdown of air",
	"Kylo Ren putting on another helmet over his smaller one",
	"a Sith car wash where the bristles on the brushes are little lightsabers"
};

const char *PARENTS_1[5] = {"Luke", "Leia", "Han", "Obi-Wan", "a random junk trader"};

const char *PARENTS_2[6] = {"Poe", "BB-8", "Amilyn Holdo", "Laura Dern", "a random junk trader", "that one droid from the Jawa Sandcrawler that says Gonk"};

int main()
{
	srand(time(NULL));
	printf("In this Star Wars movie, our heroes return to take on the First Order and new villain %s with help from their new friend %s. \nRey builds a new lightsaber with a %s blade, and they head out to confront the First Order's new superweapon, the %s, a space station capable of %s.\nThey unexpectedly join forces with their old enemy %s and destroy the superweapon in a battle featuring %s.\n\nP.S. Rey's parents are %s and %s.\n", VILLAINS[rand() % 5], FRIENDS[rand() % 5], LIGHTSABER_COLORS[rand() % 5], WEAPONS[rand() % 5], WEAPON_CAPABILITIES[rand() % 5], OLD_ENEMIES[rand() % 5], BATTLE_FEATURES[rand() % 5], PARENTS_1[rand() % 5], PARENTS_2[rand() % 6]);
	return 0;
}
