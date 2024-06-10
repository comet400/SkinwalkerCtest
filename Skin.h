#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <cstdlib>


#pragma warning(disable:4996)
#pragma once
const char* villager_names[10] =
{
    "Jake",
    "Jacob",
    "Robert",
    "Daniel",
    "Maya",
    "Mike",
    "Trevor",
    "Liz",
    "Layla",
    "Rose"
};


class Jake_Data {
public:
    const char* jake_phrases[100];
    const char* jake_incomplete_phrases[20];
    const char* options_favorite_thing_jake[5];
    const char* options_best_part_of_day_jake[5];
    const char* options_farming_since_jake[5];
    const char* options_learned_from_jake[5];
    const char* options_favorite_vegetable_jake[5];
    const char* options_love_smell_jake[5];
    const char* options_nothing_more_rewarding_jake[5];
    const char* options_simple_life_jake[5];
    const char* options_favorite_season_jake[5];
    const char* options_believe_hard_work_jake[5];
    const char* options_favorite_tool_jake[5];
    const char* options_farm_is_jake[5];
    const char* options_take_pride_in_jake[5];
    const char* options_enjoy_seeing_fruits_jake[5];
    const char* options_best_memories_from_jake[5];
    const char* options_love_quiet_mornings_jake[5];
    const char* options_favorite_crop_to_grow_jake[5];
    const char* options_farming_in_jake[5];
    const char* options_could_talk_about_jake[5];
    const char* options_enjoy_sharing_tips_jake[5];
    const char* good_gift_responses[5];
    const char* bad_gift_responses[5];
    const char* neutral_gift_responses[5];

    // Constructor
    Jake_Data() {

        const char* temp_jake_phrases[100] = {
            "Hey there! How's it going?",
            "Harvest is looking good this season!",
            "Nothing like a hard day's work on the farm.",
            "Cheer up! A good meal can solve many problems.",
            "Farming's tough, but it's worth it.",
            "I love seeing the fruits of my labor.",
            "Need any help with your crops?",
            "Let's make sure no one goes hungry around here.",
            "You can always count on me for some fresh veggies.",
            "Working the land gives me a sense of purpose.",
            "The weather's perfect for farming today.",
            "Ever tried growing pumpkins? They're my specialty.",
            "There's something rewarding about growing your own food.",
            "Feel free to drop by if you need more supplies.",
            "Farming is in my blood, just like my father before me.",
            "The key to a good harvest is patience and care.",
            "I enjoy the simplicity of farm life.",
            "Let's chat while I finish up this harvest.",
            "There's always something to do on the farm.",
            "Nature has its own way of rewarding hard work.",
            "Early to bed, early to rise, makes a farmer healthy, wealthy, and wise.",
            "A good harvest requires dedication and time.",
            "Farm life teaches you patience.",
            "I've been farming since I was a kid.",
            "The soil is fertile this year.",
            "I could talk about farming all day.",
            "You should see the sunrise from the fields, it's breathtaking.",
            "Animals can be great companions on the farm.",
            "It's a good day for planting seeds.",
            "Rain is both a blessing and a challenge for farmers.",
            "The seasons dictate our work schedule.",
            "There's always room for improvement in farming techniques.",
            "Community is important in rural life.",
            "Fresh air and open spaces, that's what I love.",
            "Farm work keeps you fit and healthy.",
            "Each crop has its own unique growing requirements.",
            "It's satisfying to see the results of hard work.",
            "I enjoy sharing farming tips with others.",
            "The smell of fresh earth is invigorating.",
            "Every farmer has their own favorite crop to grow.",
            "We learn from every planting season.",
            "The cycle of planting and harvesting is continuous.",
            "Even a small garden can provide a lot of food.",
            "Sustainable farming practices are important.",
            "There's a lot of science behind good farming.",
            "I love working with my hands.",
            "Farming connects you to nature.",
            "Good neighbors make rural life even better.",
            "There's a lot of wisdom in traditional farming methods.",
            "A successful farm requires careful planning.",
            "Farming isn't just a job, it's a way of life.",
            "Watching the crops grow brings a sense of peace.",
            "I take pride in my work.",
            "You have to respect the land to be a good farmer.",
            "Every day on the farm is different.",
            "The farm is a great place to raise a family.",
            "You can't rush nature.",
            "Growing your own food is incredibly rewarding.",
            "I enjoy the solitude of the farm.",
            "Farm life keeps you grounded.",
            "It's hard work, but I wouldn't trade it for anything.",
            "The best part of farming is seeing the results of your labor.",
            "I love sharing the bounty of the harvest.",
            "The farm is my sanctuary.",
            "Farming teaches you the value of hard work.",
            "There's no place I'd rather be.",
            "Every season brings new challenges and rewards.",
            "Farming is in my heart and soul.",
            "The farm is a place of constant learning.",
            "You learn to appreciate the little things on the farm.",
            "Farming requires a lot of patience.",
            "There's something special about working the land.",
            "I enjoy the simple life on the farm.",
            "The farm is where I find my peace.",
            "Each day on the farm is a blessing.",
            "I love the rhythm of the seasons.",
            "Farming is a labor of love.",
            "The farm keeps me busy and fulfilled.",
            "You have to be adaptable to be a good farmer.",
            "The farm is my life's work.",
            "I enjoy the physical labor of farming.",
            "There's a deep satisfaction in growing your own food.",
            "The farm is where I feel most at home.",
            "Farming is both challenging and rewarding.",
            "I love the fresh air and open spaces.",
            "Farming is a family tradition.",
            "The farm is a place of constant growth.",
            "I take pride in producing quality food.",
            "Farming is a way of life that I cherish.",
            "The farm is where I find my purpose.",
            "I enjoy the independence of farm life.",
            "Farming connects you to the earth.",
            "The farm is a place of hard work and joy.",
            "You learn to appreciate the changing seasons on the farm.",
            "Farming keeps you humble.",
            "The farm is my passion.",
            "I love the simplicity of farm life.",
            "The farm teaches you to be resourceful.",
            "Farming is a never-ending adventure.",
            "The farm is my happy place."
        };
        for (int i = 0; i < 100; ++i) {
            jake_phrases[i] = temp_jake_phrases[i];
        }

        const char* temp_jake_incomplete_phrases[20] = {
            "My favorite thing is",
            "The best part of my day is",
            "I've been farming since",
            "I learned everything about farming from",
            "My favorite vegetable to grow is",
            "I love the smell of",
            "There's nothing more rewarding than",
            "I enjoy the simple life on",
            "My favorite season is",
            "I believe hard work",
            "My favorite tool is",
            "The farm is my",
            "I take pride in",
            "I enjoy seeing the fruits of",
            "My best memories are from",
            "I love the quiet mornings on",
            "My favorite crop to grow is",
            "Farming is in my",
            "I could talk about",
            "I enjoy sharing tips about"
        };
        for (int i = 0; i < 20; ++i) {
            jake_incomplete_phrases[i] = temp_jake_incomplete_phrases[i];
        }

        const char* temp_options_favorite_thing_jake[5] = {
            "carrots", "pumpkins", "corn", "wheat", "watermelon"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_thing_jake[i] = temp_options_favorite_thing_jake[i];
        }

        const char* temp_options_best_part_of_day_jake[5] = {
            "sunrise", "working in the fields", "feeding the animals", "harvesting", "sunset"
        };
        for (int i = 0; i < 5; ++i) {
            options_best_part_of_day_jake[i] = temp_options_best_part_of_day_jake[i];
        }

        const char* temp_options_farming_since_jake[5] = {
            "I was a kid", "my teenage years", "my twenties", "I can remember", "last year"
        };
        for (int i = 0; i < 5; ++i) {
            options_farming_since_jake[i] = temp_options_farming_since_jake[i];
        }

        const char* temp_options_learned_from_jake[5] = {
            "my father", "my mother", "my grandfather", "my neighbor", "books"
        };
        for (int i = 0; i < 5; ++i) {
            options_learned_from_jake[i] = temp_options_learned_from_jake[i];
        }

        const char* temp_options_favorite_vegetable_jake[5] = {
            "carrots", "pumpkins", "corn", "tomatoes", "lettuce"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_vegetable_jake[i] = temp_options_favorite_vegetable_jake[i];
        }

        const char* temp_options_love_smell_jake[5] = {
            "fresh earth", "blooming flowers", "morning dew", "ripe fruit", "rain"
        };
        for (int i = 0; i < 5; ++i) {
            options_love_smell_jake[i] = temp_options_love_smell_jake[i];
        }

        const char* temp_options_nothing_more_rewarding_jake[5] = {
            "a good harvest", "seeing the crops grow", "working with my hands", "helping others", "living off the land"
        };
        for (int i = 0; i < 5; ++i) {
            options_nothing_more_rewarding_jake[i] = temp_options_nothing_more_rewarding_jake[i];
        }

        const char* temp_options_simple_life_jake[5] = {
            "the farm", "the countryside", "the fields", "the homestead", "the ranch"
        };
        for (int i = 0; i < 5; ++i) {
            options_simple_life_jake[i] = temp_options_simple_life_jake[i];
        }

        const char* temp_options_favorite_season_jake[5] = {
            "spring", "summer", "fall", "winter", "harvest time"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_season_jake[i] = temp_options_favorite_season_jake[i];
        }

        const char* temp_options_believe_hard_work_jake[5] = {
            "pays off", "builds character", "is essential", "is rewarding", "makes life better"
        };
        for (int i = 0; i < 5; ++i) {
            options_believe_hard_work_jake[i] = temp_options_believe_hard_work_jake[i];
        }

        const char* temp_options_favorite_tool_jake[5] = {
            "the hoe", "the shovel", "the rake", "the tractor", "the plow"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_tool_jake[i] = temp_options_favorite_tool_jake[i];
        }

        const char* temp_options_farm_is_jake[5] = {
            "sanctuary", "home", "workplace", "passion", "life"
        };
        for (int i = 0; i < 5; ++i) {
            options_farm_is_jake[i] = temp_options_farm_is_jake[i];
        }

        const char* temp_options_take_pride_in_jake[5] = {
            "my crops", "my work", "my land", "my harvest", "my farm"
        };
        for (int i = 0; i < 5; ++i) {
            options_take_pride_in_jake[i] = temp_options_take_pride_in_jake[i];
        }

        const char* temp_options_enjoy_seeing_fruits_jake[5] = {
            "my labor", "my hard work", "the soil", "the earth", "the land"
        };
        for (int i = 0; i < 5; ++i) {
            options_enjoy_seeing_fruits_jake[i] = temp_options_enjoy_seeing_fruits_jake[i];
        }

        const char* temp_options_best_memories_from_jake[5] = {
            "the farm", "childhood", "harvest season", "planting season", "working with my family"
        };
        for (int i = 0; i < 5; ++i) {
            options_best_memories_from_jake[i] = temp_options_best_memories_from_jake[i];
        }

        const char* temp_options_love_quiet_mornings_jake[5] = {
            "the farm", "the fields", "the countryside", "the land", "the homestead"
        };
        for (int i = 0; i < 5; ++i) {
            options_love_quiet_mornings_jake[i] = temp_options_love_quiet_mornings_jake[i];
        }

        const char* temp_options_favorite_crop_to_grow_jake[5] = {
            "corn", "wheat", "potatoes", "beans", "squash"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_crop_to_grow_jake[i] = temp_options_favorite_crop_to_grow_jake[i];
        }

        const char* temp_options_farming_in_jake[5] = {
            "blood", "family", "nature", "soul", "heart"
        };
        for (int i = 0; i < 5; ++i) {
            options_farming_in_jake[i] = temp_options_farming_in_jake[i];
        }

        const char* temp_options_could_talk_about_jake[5] = {
            "farming", "crops", "harvest", "the land", "agriculture all day"
        };
        for (int i = 0; i < 5; ++i) {
            options_could_talk_about_jake[i] = temp_options_could_talk_about_jake[i];
        }

        const char* temp_options_enjoy_sharing_tips_jake[5] = {
            "farming", "planting", "harvesting", "soil care", "crop rotation"
        };
        for (int i = 0; i < 5; ++i) {
            options_enjoy_sharing_tips_jake[i] = temp_options_enjoy_sharing_tips_jake[i];
        }

        const char* temp_good_gift_responses[5] = {
            "Wow, thank you! This is just what I needed!",
            "I really appreciate this! It's perfect for me.",
            "You've got a good eye for gifts! Thanks a lot!",
            "This will come in handy on the farm. Thanks!",
            "You've made my day with this gift. Thank you!"
        };
        for (int i = 0; i < 5; ++i) {
            good_gift_responses[i] = temp_good_gift_responses[i];
        }

        // Initialize bad gift responses
        const char* temp_bad_gift_responses[5] = {
            "Oh, uh, thanks... I guess.",
            "I appreciate the thought, but this isn't really my thing.",
            "Well, it's the thought that counts, right?",
            "I don't really have a use for this, but thanks anyway.",
            "Maybe someone else can use this. Thanks."
        };
        for (int i = 0; i < 5; ++i) {
            bad_gift_responses[i] = temp_bad_gift_responses[i];
        }

        // Initialize neutral gift responses
        const char* temp_neutral_gift_responses[5] = {
            "Thanks for the gift.",
            "I appreciate it.",
            "This is nice, thank you.",
            "Thanks, this will do.",
            "I appreciate the gesture."
        };
        for (int i = 0; i < 5; ++i) {
            neutral_gift_responses[i] = temp_neutral_gift_responses[i];
        }
    }
};

class Jacob_Data {
public:
    const char* jacob_phrases[100];
    const char* jacob_incomplete_phrases[20];
    const char* options_favorite_thing_jacob[5];
    const char* options_best_part_of_day_jacob[5];
    const char* options_farming_since_jacob[5];
    const char* options_learned_from_jacob[5];
    const char* options_favorite_vegetable_jacob[5];
    const char* options_love_smell_jacob[5];
    const char* options_nothing_more_rewarding_jacob[5];
    const char* options_simple_life_jacob[5];
    const char* options_favorite_season_jacob[5];
    const char* options_believe_hard_work_jacob[5];
    const char* options_favorite_tool_jacob[5];
    const char* options_farm_is_jacob[5];
    const char* options_take_pride_in_jacob[5];
    const char* options_enjoy_seeing_fruits_jacob[5];
    const char* options_best_memories_from_jacob[5];
    const char* options_love_quiet_mornings_jacob[5];
    const char* options_favorite_crop_to_grow_jacob[5];
    const char* options_farming_in_jacob[5];
    const char* options_could_talk_about_jacob[5];
    const char* options_enjoy_sharing_tips_jacob[5];
    const char* good_gift_responses[5];
    const char* bad_gift_responses[5];
    const char* neutral_gift_responses[5];

    // Constructor
    Jacob_Data() {
        const char* temp_jacob_phrases[100] = {
            "Hey, what do you want?",
            "The night is the best time to work.",
            "Science and farming, an odd combination, right?",
            "I prefer the solitude of my lab.",
            "Farming has its own mysteries.",
            "Do you believe in the supernatural?",
            "My brother Jake is more into traditional farming.",
            "The stars hold many secrets.",
            "Books are my best friends.",
            "Do you hear that? The whispers in the wind...",
            "Let's experiment with these seeds.",
            "Ever wondered what lies beyond the stars?",
            "I find comfort in the darkness.",
            "Jake and I are quite different, yet we both love the farm.",
            "There's beauty in the night sky.",
            "This farm has many hidden secrets.",
            "Care to join me in a stargazing session?",
            "I prefer the company of my books.",
            "The soil has its own stories to tell.",
            "I'm not much of a people person.",
            "Farming is both a science and an art.",
            "Sometimes I feel like the farm is alive.",
            "Knowledge is power, even in farming.",
            "Have you ever seen a ghost?",
            "The farm is peaceful at night.",
            "I prefer the quiet over the noise of the day.",
            "The mysteries of the universe intrigue me.",
            "I often lose track of time when I'm reading.",
            "There's a certain magic in farming.",
            "I wonder what secrets the soil holds.",
            "Jake handles the social aspects; I handle the research.",
            "I enjoy the isolation of the farm.",
            "The farm is a good place for contemplation.",
            "I often experiment with different crops.",
            "There's a lot to learn from nature.",
            "The farm is full of life, even at night.",
            "I can spend hours just thinking.",
            "The stars are my companions.",
            "I prefer the shadows.",
            "There's a certain charm to the unknown.",
            "My lab is my sanctuary.",
            "I wonder about the existence of other worlds.",
            "Farming and science are interconnected.",
            "The quiet nights are perfect for reflection.",
            "I'm always seeking knowledge.",
            "There's beauty in the unexplained.",
            "The farm has a rhythm of its own.",
            "Sometimes I feel the presence of others.",
            "Farming is a never-ending experiment.",
            "Jake works hard; I work smart.",
            "I'm fascinated by the unknown.",
            "The night is my time.",
            "I feel a connection to the earth.",
            "There's more to farming than meets the eye.",
            "The quiet helps me think.",
            "I often wonder about the cosmos.",
            "The farm is a good place for research.",
            "I like to keep to myself.",
            "Farming is my form of meditation.",
            "I find solace in the dark.",
            "The farm has its own secrets.",
            "I enjoy working when everyone else is asleep.",
            "Knowledge and farming go hand in hand.",
            "I prefer the company of my thoughts.",
            "There's a certain peace in solitude.",
            "The farm at night is magical.",
            "I like to study the stars.",
            "There's always something new to learn.",
            "Jake and I have different approaches, but we both love the farm.",
            "The night sky is full of mysteries.",
            "I find beauty in the darkness.",
            "The farm is a place of discovery.",
            "I prefer the quiet life.",
            "The unknown fascinates me.",
            "Farming is like a puzzle.",
            "I find comfort in routine.",
            "The farm is a place of endless possibilities.",
            "I like to observe rather than participate.",
            "Farming is a science to me.",
            "The night is when I feel most alive.",
            "I enjoy the mysteries of the farm.",
            "The stars guide my way.",
            "The farm is where I belong.",
            "I often wonder about life's big questions.",
            "Farming keeps me grounded.",
            "The farm is my retreat.",
            "I prefer the darkness to the light.",
            "There's a certain magic in the night.",
            "I find peace in the quiet.",
            "The farm is full of hidden wonders.",
            "I enjoy the solitude of the farm.",
            "The night is when I do my best work.",
            "I find the unknown intriguing.",
            "The farm is my sanctuary.",
            "I prefer the company of the stars.",
            "The night is full of possibilities.",
            "I find solace in the darkness.",
            "The farm is a place of peace."
        };
        for (int i = 0; i < 100; ++i) {
            jacob_phrases[i] = temp_jacob_phrases[i];
        }

        const char* temp_jacob_incomplete_phrases[20] = {
            "My favorite thing is",
            "The best part of my day is",
            "I've been farming since",
            "I learned everything about farming from",
            "My favorite vegetable to grow is",
            "I love the smell of",
            "There's nothing more rewarding than",
            "I enjoy the simple life on",
            "My favorite season is",
            "I believe hard work",
            "My favorite tool is",
            "The farm is my",
            "I take pride in",
            "I enjoy seeing the fruits of",
            "My best memories are from",
            "I love the quiet mornings on",
            "My favorite crop to grow is",
            "Farming is in my",
            "I could talk about",
            "I enjoy sharing tips about"
        };
        for (int i = 0; i < 20; ++i) {
            jacob_incomplete_phrases[i] = temp_jacob_incomplete_phrases[i];
        }

        const char* temp_options_favorite_thing_jacob[5] = {
            "books", "stars", "silence", "night", "research"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_thing_jacob[i] = temp_options_favorite_thing_jacob[i];
        }

        const char* temp_options_best_part_of_day_jacob[5] = {
            "nightfall", "reading in the dark", "stargazing", "experimenting", "solitude"
        };
        for (int i = 0; i < 5; ++i) {
            options_best_part_of_day_jacob[i] = temp_options_best_part_of_day_jacob[i];
        }

        const char* temp_options_farming_since_jacob[5] = {
            "I was a kid", "my teenage years", "my twenties", "I can remember", "last year"
        };
        for (int i = 0; i < 5; ++i) {
            options_farming_since_jacob[i] = temp_options_farming_since_jacob[i];
        }

        const char* temp_options_learned_from_jacob[5] = {
            "my father", "my mother", "my grandfather", "my neighbor", "books"
        };
        for (int i = 0; i < 5; ++i) {
            options_learned_from_jacob[i] = temp_options_learned_from_jacob[i];
        }

        const char* temp_options_favorite_vegetable_jacob[5] = {
            "carrots", "pumpkins", "corn", "tomatoes", "lettuce"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_vegetable_jacob[i] = temp_options_favorite_vegetable_jacob[i];
        }

        const char* temp_options_love_smell_jacob[5] = {
            "fresh earth", "blooming flowers", "morning dew", "ripe fruit", "rain"
        };
        for (int i = 0; i < 5; ++i) {
            options_love_smell_jacob[i] = temp_options_love_smell_jacob[i];
        }

        const char* temp_options_nothing_more_rewarding_jacob[5] = {
            "a good harvest", "seeing the crops grow", "working with my hands", "helping others", "living off the land"
        };
        for (int i = 0; i < 5; ++i) {
            options_nothing_more_rewarding_jacob[i] = temp_options_nothing_more_rewarding_jacob[i];
        }

        const char* temp_options_simple_life_jacob[5] = {
            "the farm", "the countryside", "the fields", "the homestead", "the ranch"
        };
        for (int i = 0; i < 5; ++i) {
            options_simple_life_jacob[i] = temp_options_simple_life_jacob[i];
        }

        const char* temp_options_favorite_season_jacob[5] = {
            "spring", "summer", "fall", "winter", "harvest time"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_season_jacob[i] = temp_options_favorite_season_jacob[i];
        }

        const char* temp_options_believe_hard_work_jacob[5] = {
            "pays off", "builds character", "is essential", "is rewarding", "makes life better"
        };
        for (int i = 0; i < 5; ++i) {
            options_believe_hard_work_jacob[i] = temp_options_believe_hard_work_jacob[i];
        }

        const char* temp_options_favorite_tool_jacob[5] = {
            "the hoe", "the shovel", "the rake", "the tractor", "the plow"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_tool_jacob[i] = temp_options_favorite_tool_jacob[i];
        }

        const char* temp_options_farm_is_jacob[5] = {
            "sanctuary", "home", "workplace", "passion", "life"
        };
        for (int i = 0; i < 5; ++i) {
            options_farm_is_jacob[i] = temp_options_farm_is_jacob[i];
        }

        const char* temp_options_take_pride_in_jacob[5] = {
            "my crops", "my work", "my land", "my harvest", "my farm"
        };
        for (int i = 0; i < 5; ++i) {
            options_take_pride_in_jacob[i] = temp_options_take_pride_in_jacob[i];
        }

        const char* temp_options_enjoy_seeing_fruits_jacob[5] = {
            "my labor", "my hard work", "the soil", "the earth", "the land"
        };
        for (int i = 0; i < 5; ++i) {
            options_enjoy_seeing_fruits_jacob[i] = temp_options_enjoy_seeing_fruits_jacob[i];
        }

        const char* temp_options_best_memories_from_jacob[5] = {
            "the farm", "childhood", "harvest season", "planting season", "working with my family"
        };
        for (int i = 0; i < 5; ++i) {
            options_best_memories_from_jacob[i] = temp_options_best_memories_from_jacob[i];
        }

        const char* temp_options_love_quiet_mornings_jacob[5] = {
            "the farm", "the fields", "the countryside", "the land", "the homestead"
        };
        for (int i = 0; i < 5; ++i) {
            options_love_quiet_mornings_jacob[i] = temp_options_love_quiet_mornings_jacob[i];
        }

        const char* temp_options_favorite_crop_to_grow_jacob[5] = {
            "corn", "wheat", "potatoes", "beans", "squash"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_crop_to_grow_jacob[i] = temp_options_favorite_crop_to_grow_jacob[i];
        }

        const char* temp_options_farming_in_jacob[5] = {
            "blood", "family", "nature", "soul", "heart"
        };
        for (int i = 0; i < 5; ++i) {
            options_farming_in_jacob[i] = temp_options_farming_in_jacob[i];
        }

        const char* temp_options_could_talk_about_jacob[5] = {
            "farming", "crops", "harvest", "the land", "agriculture all day"
        };
        for (int i = 0; i < 5; ++i) {
            options_could_talk_about_jacob[i] = temp_options_could_talk_about_jacob[i];
        }

        const char* temp_options_enjoy_sharing_tips_jacob[5] = {
            "farming", "planting", "harvesting", "soil care", "crop rotation"
        };
        for (int i = 0; i < 5; ++i) {
            options_enjoy_sharing_tips_jacob[i] = temp_options_enjoy_sharing_tips_jacob[i];
        }

        const char* temp_good_gift_responses[5] = {
            "Wow, thank you! This is just what I needed!",
            "I really appreciate this! It's perfect for me.",
            "You've got a good eye for gifts! Thanks a lot!",
            "This will come in handy on the farm. Thanks!",
            "You've made my day with this gift. Thank you!"
        };
        for (int i = 0; i < 5; ++i) {
            good_gift_responses[i] = temp_good_gift_responses[i];
        }

        // Initialize bad gift responses
        const char* temp_bad_gift_responses[5] = {
            "Oh, uh, thanks... I guess.",
            "I appreciate the thought, but this isn't really my thing.",
            "Well, it's the thought that counts, right?",
            "I don't really have a use for this, but thanks anyway.",
            "Maybe someone else can use this. Thanks."
        };
        for (int i = 0; i < 5; ++i) {
            bad_gift_responses[i] = temp_bad_gift_responses[i];
        }

        // Initialize neutral gift responses
        const char* temp_neutral_gift_responses[5] = {
            "Thanks for the gift.",
            "I appreciate it.",
            "This is nice, thank you.",
            "Thanks, this will do.",
            "I appreciate the gesture."
        };
        for (int i = 0; i < 5; ++i) {
            neutral_gift_responses[i] = temp_neutral_gift_responses[i];
        }
    }
};

class Robert_Data {
public:
    const char* robert_phrases[100];
    const char* robert_incomplete_phrases[20];
    const char* options_favorite_thing_robert[5];
    const char* options_best_part_of_day_robert[5];
    const char* options_fishing_since_robert[5];
    const char* options_learned_from_robert[5];
    const char* options_favorite_fish_robert[5];
    const char* options_love_smell_robert[5];
    const char* options_nothing_more_rewarding_robert[5];
    const char* options_simple_life_robert[5];
    const char* options_favorite_season_robert[5];
    const char* options_believe_hard_work_robert[5];
    const char* options_favorite_tool_robert[5];
    const char* options_boat_is_robert[5];
    const char* options_take_pride_in_robert[5];
    const char* options_enjoy_seeing_catch_robert[5];
    const char* options_best_memories_from_robert[5];
    const char* options_love_quiet_mornings_robert[5];
    const char* options_favorite_spot_to_fish_robert[5];
    const char* options_fishing_in_robert[5];
    const char* options_could_talk_about_robert[5];
    const char* options_enjoy_sharing_tips_robert[5];
    const char* good_gift_responses[5];
    const char* bad_gift_responses[5];
    const char* neutral_gift_responses[5];

    // Constructor
    Robert_Data() {
        const char* temp_robert_phrases[100] = {
            "Hey there! How's the catch today?",
            "Nothing like a day out on the water.",
            "The sea is my second home.",
            "Every day is a good day for fishing.",
            "I love the sound of the waves.",
            "Need any help with your fishing gear?",
            "Let's head out to the best fishing spots.",
            "You can always count on me for a good fishing story.",
            "The best part of fishing is the peace it brings.",
            "The weather's perfect for a fishing trip.",
            "Ever tried catching a marlin? It's quite a challenge.",
            "There's something magical about the ocean.",
            "Feel free to join me on my boat anytime.",
            "Fishing runs in my family, just like my father before me.",
            "The key to a good catch is patience and skill.",
            "I enjoy the simplicity of a fisherman's life.",
            "Let's chat while we wait for a bite.",
            "There's always something to learn about the sea.",
            "Nature has its own way of rewarding a good fisherman.",
            "Early to bed, early to rise, makes a fisherman healthy, wealthy, and wise.",
            "A good catch requires dedication and time.",
            "Fishing teaches you patience.",
            "I've been fishing since I was a kid.",
            "The sea is bountiful this year.",
            "I could talk about fishing all day.",
            "You should see the sunrise over the water, it's breathtaking.",
            "Fish can be great companions on the boat.",
            "It's a good day for casting a line.",
            "Rain is both a blessing and a challenge for fishermen.",
            "The tides dictate our work schedule.",
            "There's always room for improvement in fishing techniques.",
            "Community is important in coastal life.",
            "Fresh air and open waters, that's what I love.",
            "Fishing keeps you fit and healthy.",
            "Each fish has its own unique behavior.",
            "It's satisfying to see the results of a good catch.",
            "I enjoy sharing fishing tips with others.",
            "The smell of the sea is invigorating.",
            "Every fisherman has their own favorite spot to fish.",
            "We learn from every fishing trip.",
            "The cycle of tides and seasons is continuous.",
            "Even a small boat can provide a lot of joy.",
            "Sustainable fishing practices are important.",
            "There's a lot of science behind good fishing.",
            "I love working with my hands.",
            "Fishing connects you to nature.",
            "Good neighbors make coastal life even better.",
            "There's a lot of wisdom in traditional fishing methods.",
            "A successful fishing trip requires careful planning.",
            "Fishing isn't just a job, it's a way of life.",
            "Watching the waves brings a sense of peace.",
            "I take pride in my work.",
            "You have to respect the sea to be a good fisherman.",
            "Every day on the boat is different.",
            "The sea is a great place to find yourself.",
            "You can't rush a good catch.",
            "Catching your own food is incredibly rewarding.",
            "I enjoy the solitude of the sea.",
            "Fishing life keeps you grounded.",
            "It's hard work, but I wouldn't trade it for anything.",
            "The best part of fishing is seeing the results of your patience.",
            "I love sharing the bounty of the sea.",
            "The boat is my sanctuary.",
            "Fishing teaches you the value of hard work.",
            "There's no place I'd rather be.",
            "Every season brings new challenges and rewards.",
            "Fishing is in my heart and soul.",
            "The sea is a place of constant learning.",
            "You learn to appreciate the little things on the water.",
            "Fishing requires a lot of patience.",
            "There's something special about working the sea.",
            "I enjoy the simple life on the boat.",
            "The sea is where I find my peace.",
            "Each day on the water is a blessing.",
            "I love the rhythm of the tides.",
            "Fishing is a labor of love.",
            "The sea keeps me busy and fulfilled.",
            "You have to be adaptable to be a good fisherman.",
            "The sea is my life's work.",
            "I enjoy the physical labor of fishing.",
            "There's a deep satisfaction in catching your own food.",
            "The boat is where I feel most at home.",
            "Fishing is both challenging and rewarding.",
            "I love the fresh air and open waters.",
            "Fishing is a family tradition.",
            "The sea is a place of constant growth.",
            "I take pride in catching quality fish.",
            "Fishing is a way of life that I cherish.",
            "The sea is where I find my purpose.",
            "I enjoy the independence of fishing life.",
            "Fishing connects you to the earth and the sea.",
            "The sea is a place of hard work and joy.",
            "You learn to appreciate the changing tides on the sea.",
            "Fishing keeps you humble.",
            "The sea is my passion.",
            "I love the simplicity of fishing life.",
            "The sea teaches you to be resourceful.",
            "Fishing is a never-ending adventure.",
            "The sea is my happy place."
        };
        for (int i = 0; i < 100; ++i) {
            robert_phrases[i] = temp_robert_phrases[i];
        }

        const char* temp_robert_incomplete_phrases[20] = {
            "My favorite thing is",
            "The best part of my day is",
            "I've been fishing since",
            "I learned everything about fishing from",
            "My favorite fish to catch is",
            "I love the smell of",
            "There's nothing more rewarding than",
            "I enjoy the simple life on",
            "My favorite season is",
            "I believe hard work",
            "My favorite tool is",
            "The boat is my",
            "I take pride in",
            "I enjoy seeing the fruits of",
            "My best memories are from",
            "I love the quiet mornings on",
            "My favorite spot to fish is",
            "Fishing is in my",
            "I could talk about",
            "I enjoy sharing tips about"
        };
        for (int i = 0; i < 20; ++i) {
            robert_incomplete_phrases[i] = temp_robert_incomplete_phrases[i];
        }

        const char* temp_options_favorite_thing_robert[5] = {
            "the sea", "fishing gear", "boats", "the sunrise", "a good catch"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_thing_robert[i] = temp_options_favorite_thing_robert[i];
        }

        const char* temp_options_best_part_of_day_robert[5] = {
            "morning", "casting the first line", "waiting for a bite", "reeling in a big one", "evening"
        };
        for (int i = 0; i < 5; ++i) {
            options_best_part_of_day_robert[i] = temp_options_best_part_of_day_robert[i];
        }

        const char* temp_options_fishing_since_robert[5] = {
            "I was a kid", "my teenage years", "my twenties", "I can remember", "last year"
        };
        for (int i = 0; i < 5; ++i) {
            options_fishing_since_robert[i] = temp_options_fishing_since_robert[i];
        }

        const char* temp_options_learned_from_robert[5] = {
                 "my father", "my mother", "my grandfather", "my neighbor", "books"
        };
        for (int i = 0; i < 5; ++i) {
            options_learned_from_robert[i] = temp_options_learned_from_robert[i];
        }

        const char* temp_options_favorite_fish_robert[5] = {
            "salmon", "trout", "bass", "mackerel", "tuna"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_fish_robert[i] = temp_options_favorite_fish_robert[i];
        }

        const char* temp_options_love_smell_robert[5] = {
            "sea breeze", "freshly caught fish", "morning dew", "saltwater", "rain"
        };
        for (int i = 0; i < 5; ++i) {
            options_love_smell_robert[i] = temp_options_love_smell_robert[i];
        }

        const char* temp_options_nothing_more_rewarding_robert[5] = {
            "a good catch", "seeing the nets full", "working with my hands", "helping others", "living off the sea"
        };
        for (int i = 0; i < 5; ++i) {
            options_nothing_more_rewarding_robert[i] = temp_options_nothing_more_rewarding_robert[i];
        }

        const char* temp_options_simple_life_robert[5] = {
            "the sea", "the coast", "the boat", "the shore", "the marina"
        };
        for (int i = 0; i < 5; ++i) {
            options_simple_life_robert[i] = temp_options_simple_life_robert[i];
        }

        const char* temp_options_favorite_season_robert[5] = {
            "spring", "summer", "fall", "winter", "fishing season"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_season_robert[i] = temp_options_favorite_season_robert[i];
        }

        const char* temp_options_believe_hard_work_robert[5] = {
            "pays off", "builds character", "is essential", "is rewarding", "makes life better"
        };
        for (int i = 0; i < 5; ++i) {
            options_believe_hard_work_robert[i] = temp_options_believe_hard_work_robert[i];
        }

        const char* temp_options_favorite_tool_robert[5] = {
            "the fishing rod", "the net", "the boat", "the tackle box", "the bait"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_tool_robert[i] = temp_options_favorite_tool_robert[i];
        }

        const char* temp_options_boat_is_robert[5] = {
            "my sanctuary", "home", "workplace", "passion", "life"
        };
        for (int i = 0; i < 5; ++i) {
            options_boat_is_robert[i] = temp_options_boat_is_robert[i];
        }

        const char* temp_options_take_pride_in_robert[5] = {
            "my catch", "my work", "my boat", "my skills", "my dedication"
        };
        for (int i = 0; i < 5; ++i) {
            options_take_pride_in_robert[i] = temp_options_take_pride_in_robert[i];
        }

        const char* temp_options_enjoy_seeing_catch_robert[5] = {
            "my hard work", "the sea's bounty", "the fish", "the nets", "the boat"
        };
        for (int i = 0; i < 5; ++i) {
            options_enjoy_seeing_catch_robert[i] = temp_options_enjoy_seeing_catch_robert[i];
        }

        const char* temp_options_best_memories_from_robert[5] = {
            "the sea", "childhood", "fishing trips", "sunrise", "working with my family"
        };
        for (int i = 0; i < 5; ++i) {
            options_best_memories_from_robert[i] = temp_options_best_memories_from_robert[i];
        }

        const char* temp_options_love_quiet_mornings_robert[5] = {
            "the sea", "the shore", "the coast", "the boat", "the marina"
        };
        for (int i = 0; i < 5; ++i) {
            options_love_quiet_mornings_robert[i] = temp_options_love_quiet_mornings_robert[i];
        }

        const char* temp_options_favorite_spot_to_fish_robert[5] = {
            "the bay", "the river", "the ocean", "the lake", "the pier"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_spot_to_fish_robert[i] = temp_options_favorite_spot_to_fish_robert[i];
        }

        const char* temp_options_fishing_in_robert[5] = {
            "blood", "family", "nature", "soul", "heart"
        };
        for (int i = 0; i < 5; ++i) {
            options_fishing_in_robert[i] = temp_options_fishing_in_robert[i];
        }

        const char* temp_options_could_talk_about_robert[5] = {
            "fishing", "the sea", "catching fish", "the tides", "boats"
        };
        for (int i = 0; i < 5; ++i) {
            options_could_talk_about_robert[i] = temp_options_could_talk_about_robert[i];
        }

        const char* temp_options_enjoy_sharing_tips_robert[5] = {
            "fishing", "casting", "reeling", "baiting", "boating"
        };
        for (int i = 0; i < 5; ++i) {
            options_enjoy_sharing_tips_robert[i] = temp_options_enjoy_sharing_tips_robert[i];
        }

        const char* temp_good_gift_responses[5] = {
            "Wow, thank you! This is just what I needed!",
            "I really appreciate this! It's perfect for me.",
            "You've got a good eye for gifts! Thanks a lot!",
            "This will come in handy on the boat. Thanks!",
            "You've made my day with this gift. Thank you!"
        };
        for (int i = 0; i < 5; ++i) {
            good_gift_responses[i] = temp_good_gift_responses[i];
        }

        const char* temp_bad_gift_responses[5] = {
            "Oh, uh, thanks... I guess.",
            "I appreciate the thought, but this isn't really my thing.",
            "Well, it's the thought that counts, right?",
            "I don't really have a use for this, but thanks anyway.",
            "Maybe someone else can use this. Thanks."
        };
        for (int i = 0; i < 5; ++i) {
            bad_gift_responses[i] = temp_bad_gift_responses[i];
        }

        const char* temp_neutral_gift_responses[5] = {
            "Thanks for the gift.",
            "I appreciate it.",
            "This is nice, thank you.",
            "Thanks, this will do.",
            "I appreciate the gesture."
        };
        for (int i = 0; i < 5; ++i) {
            neutral_gift_responses[i] = temp_neutral_gift_responses[i];
        }
    }
};

class Daniel_Data {
public:
    const char* daniel_phrases[100];
    const char* daniel_incomplete_phrases[20];
    const char* options_favorite_thing_daniel[5];
    const char* options_best_part_of_day_daniel[5];
    const char* options_adventuring_since_daniel[5];
    const char* options_learned_from_daniel[5];
    const char* options_favorite_weapon_daniel[5];
    const char* options_love_smell_daniel[5];
    const char* options_nothing_more_thrilling_daniel[5];
    const char* options_simple_life_daniel[5];
    const char* options_favorite_season_daniel[5];
    const char* options_believe_hard_work_daniel[5];
    const char* options_favorite_tool_daniel[5];
    const char* options_adventure_is_daniel[5];
    const char* options_take_pride_in_daniel[5];
    const char* options_enjoy_seeing_chaos_daniel[5];
    const char* options_best_memories_from_daniel[5];
    const char* options_love_quiet_mornings_daniel[5];
    const char* options_favorite_place_to_explore_daniel[5];
    const char* options_adventuring_in_daniel[5];
    const char* options_could_talk_about_daniel[5];
    const char* options_enjoy_sharing_tips_daniel[5];
    const char* good_gift_responses[5];
    const char* bad_gift_responses[5];
    const char* neutral_gift_responses[5];

    // Constructor
    Daniel_Data() {
        const char* temp_daniel_phrases[100] = {
            "Hey, you look like you need some excitement!",
            "Let's go find some trouble!",
            "Adventure is out there, let's seize it!",
            "Who cares about the rules? Let's break them!",
            "You're too boring, spice up your life a bit!",
            "I live for the thrill of the chase.",
            "Danger is my middle name.",
            "Need a hand? Actually, never mind, I'll do it myself.",
            "Stop whining and start doing something!",
            "There's no time to waste, let's go!",
            "Ever tried skydiving? No? You're missing out!",
            "I bet you can't keep up with me.",
            "I'm not here to make friends, just to have fun.",
            "Do you hear that? Adventure is calling.",
            "Let's see what kind of trouble we can stir up.",
            "I don't do things halfway; it's all or nothing.",
            "Why play it safe when you can go all out?",
            "Come on, show me what you've got!",
            "The more dangerous, the better.",
            "You look like you need a little chaos in your life.",
            "I'm not afraid of a little blood.",
            "Rules are for losers.",
            "Don't be a coward, take a risk!",
            "Let's do something crazy.",
            "You only live once, so live on the edge!",
            "I'm always up for a fight.",
            "Who cares what people think?",
            "I'm not here to please anyone.",
            "Adventure is my life.",
            "I'm here for a good time, not a long time.",
            "If you're not living on the edge, you're taking up too much space.",
            "Let's make some noise!",
            "The louder, the better.",
            "I don't need permission to be awesome.",
            "I'm not interested in your opinion.",
            "Why fit in when you can stand out?",
            "I thrive in chaos.",
            "There's nothing more boring than peace and quiet.",
            "Let's turn this place upside down.",
            "I'm not afraid to get my hands dirty.",
            "You think you can handle me?",
            "Boring people make me sick.",
            "Let's go on a wild adventure!",
            "I'm the master of my own destiny.",
            "The world is my playground.",
            "I'm not here to follow rules.",
            "I'm not your average guy.",
            "Let's see what kind of trouble we can get into.",
            "I've got a wild side, can you handle it?",
            "I'm not here to make friends.",
            "Let's shake things up!",
            "You can't tame me.",
            "The crazier, the better.",
            "I'm not afraid of a challenge.",
            "Let's make today unforgettable.",
            "I don't care about your feelings.",
            "The more dangerous, the more fun.",
            "I'm here to make my own rules.",
            "You think you can keep up?",
            "Let's do something insane.",
            "I'm not afraid of the dark.",
            "You can't scare me.",
            "Let's push the limits!",
            "I live for the adrenaline rush.",
            "I'm not afraid to take risks.",
            "I'm the king of adventure.",
            "You can't control me.",
            "Let's see what kind of chaos we can create.",
            "I'm not interested in playing it safe.",
            "Let's make some memories.",
            "I don't need your approval.",
            "The world is my stage.",
            "Let's make some noise!",
            "I'm not afraid to be myself.",
            "You can't stop me.",
            "Let's see what kind of trouble we can stir up.",
            "I'm not here to play nice.",
            "Let's make things interesting.",
            "You think you can handle the adventure?",
            "I'm not afraid of anything.",
            "Let's make today epic.",
            "I don't need anyone's permission.",
            "The more wild, the better.",
            "I'm here to make my mark.",
            "You can't hold me back.",
            "Let's do something unforgettable.",
            "I'm not afraid of getting hurt.",
            "Let's see what kind of trouble we can get into.",
            "I'm not interested in being ordinary.",
            "Let's live life to the fullest.",
            "I'm not afraid of a little chaos.",
            "Let's see what kind of adventure we can have.",
            "I'm not here to follow the rules.",
            "Let's make today legendary.",
            "I don't care what people think.",
            "The more exciting, the better.",
            "I'm here to make a statement.",
            "You can't keep me down.",
            "Let's do something extraordinary."
        };
        for (int i = 0; i < 100; ++i) {
            daniel_phrases[i] = temp_daniel_phrases[i];
        }

        const char* temp_daniel_incomplete_phrases[20] = {
            "My favorite thing is",
            "The best part of my day is",
            "I've been adventuring since",
            "I learned everything about adventuring from",
            "My favorite weapon is",
            "I love the smell of",
            "There's nothing more thrilling than",
            "I enjoy the simple life of",
            "My favorite season is",
            "I believe hard work",
            "My favorite tool is",
            "The adventure is my",
            "I take pride in",
            "I enjoy seeing the chaos from",
            "My best memories are from",
            "I love the quiet mornings before",
            "My favorite place to explore is",
            "Adventuring is in my",
            "I could talk about",
            "I enjoy sharing tips about"
        };
        for (int i = 0; i < 20; ++i) {
            daniel_incomplete_phrases[i] = temp_daniel_incomplete_phrases[i];
        }

        const char* temp_options_favorite_thing_daniel[5] = {
            "adrenaline", "danger", "chaos", "thrill", "violence"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_thing_daniel[i] = temp_options_favorite_thing_daniel[i];
        }

        const char* temp_options_best_part_of_day_daniel[5] = {
            "nightfall", "breaking the rules", "causing trouble", "seeking thrills", "getting into fights"
        };
        for (int i = 0; i < 5; ++i) {
            options_best_part_of_day_daniel[i] = temp_options_best_part_of_day_daniel[i];
        }

        const char* temp_options_adventuring_since_daniel[5] = {
            "I was a kid", "my teenage years", "my twenties", "I can remember", "last year"
        };
        for (int i = 0; i < 5; ++i) {
            options_adventuring_since_daniel[i] = temp_options_adventuring_since_daniel[i];
        }

        const char* temp_options_learned_from_daniel[5] = {
            "my father", "my mother", "my grandfather", "my neighbor", "books"
        };
        for (int i = 0; i < 5; ++i) {
            options_learned_from_daniel[i] = temp_options_learned_from_daniel[i];
        }

        const char* temp_options_favorite_weapon_daniel[5] = {
            "knife", "gun", "fists", "bat", "sword"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_weapon_daniel[i] = temp_options_favorite_weapon_daniel[i];
        }

        const char* temp_options_love_smell_daniel[5] = {
            "gunpowder", "sweat", "adrenaline", "blood", "victory"
        };
        for (int i = 0; i < 5; ++i) {
            options_love_smell_daniel[i] = temp_options_love_smell_daniel[i];
        }

        const char* temp_options_nothing_more_thrilling_daniel[5] = {
            "a good fight", "breaking the rules", "the adrenaline rush", "living dangerously", "pushing limits"
        };
        for (int i = 0; i < 5; ++i) {
            options_nothing_more_thrilling_daniel[i] = temp_options_nothing_more_thrilling_daniel[i];
        }

        const char* temp_options_simple_life_daniel[5] = {
            "the chaos", "the danger", "the thrill", "the adventure", "the excitement"
        };
        for (int i = 0; i < 5; ++i) {
            options_simple_life_daniel[i] = temp_options_simple_life_daniel[i];
        }

        const char* temp_options_favorite_season_daniel[5] = {
            "spring", "summer", "fall", "winter", "adventure season"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_season_daniel[i] = temp_options_favorite_season_daniel[i];
        }

        const char* temp_options_believe_hard_work_daniel[5] = {
            "pays off", "builds character", "is essential", "is rewarding", "makes life better"
        };
        for (int i = 0; i < 5; ++i) {
            options_believe_hard_work_daniel[i] = temp_options_believe_hard_work_daniel[i];
        }

        const char* temp_options_favorite_tool_daniel[5] = {
            "knife", "bat", "fists", "gun", "sword"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_tool_daniel[i] = temp_options_favorite_tool_daniel[i];
        }

        const char* temp_options_adventure_is_daniel[5] = {
            "my life", "my passion", "everything", "chaos", "thrill"
        };
        for (int i = 0; i < 5; ++i) {
            options_adventure_is_daniel[i] = temp_options_adventure_is_daniel[i];
        }

        const char* temp_options_take_pride_in_daniel[5] = {
            "my strength", "my chaos", "my fearlessness", "my thrill-seeking", "my violence"
        };
        for (int i = 0; i < 5; ++i) {
            options_take_pride_in_daniel[i] = temp_options_take_pride_in_daniel[i];
        }

        const char* temp_options_enjoy_seeing_chaos_daniel[5] = {
            "my work", "my chaos", "the thrill", "the adventure", "the mess"
        };
        for (int i = 0; i < 5; ++i) {
            options_enjoy_seeing_chaos_daniel[i] = temp_options_enjoy_seeing_chaos_daniel[i];
        }

        const char* temp_options_best_memories_from_daniel[5] = {
            "the chaos", "childhood", "adventures", "thrills", "fights"
        };
        for (int i = 0; i < 5; ++i) {
            options_best_memories_from_daniel[i] = temp_options_best_memories_from_daniel[i];
        }

        const char* temp_options_love_quiet_mornings_daniel[5] = {
            "before the chaos", "before the fights", "before the adventure", "before the thrill", "before the trouble"
        };
        for (int i = 0; i < 5; ++i) {
            options_love_quiet_mornings_daniel[i] = temp_options_love_quiet_mornings_daniel[i];
        }

        const char* temp_options_favorite_place_to_explore_daniel[5] = {
            "the city", "the forest", "the mountains", "the jungle", "the streets"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_place_to_explore_daniel[i] = temp_options_favorite_place_to_explore_daniel[i];
        }

        const char* temp_options_adventuring_in_daniel[5] = {
            "blood", "family", "nature", "soul", "heart"
        };
        for (int i = 0; i < 5; ++i) {
            options_adventuring_in_daniel[i] = temp_options_adventuring_in_daniel[i];
        }

        const char* temp_options_could_talk_about_daniel[5] = {
            "adventures", "thrills", "fights", "chaos", "trouble"
        };
        for (int i = 0; i < 5; ++i) {
            options_could_talk_about_daniel[i] = temp_options_could_talk_about_daniel[i];
        }

        const char* temp_options_enjoy_sharing_tips_daniel[5] = {
            "adventuring", "fighting", "causing chaos", "seeking thrills", "breaking rules"
        };
        for (int i = 0; i < 5; ++i) {
            options_enjoy_sharing_tips_daniel[i] = temp_options_enjoy_sharing_tips_daniel[i];
        }

        const char* temp_good_gift_responses[5] = {
            "Wow, this is perfect for causing some trouble!",
            "I could definitely use this for my next adventure.",
            "This is exactly what I needed to spice things up!",
            "You really know how to pick a gift, thanks!",
            "This will come in handy for sure, thanks!"
        };
        for (int i = 0; i < 5; ++i) {
            good_gift_responses[i] = temp_good_gift_responses[i];
        }

        const char* temp_bad_gift_responses[5] = {
            "What am I supposed to do with this?",
            "This isn't really my style, but thanks anyway.",
            "I guess it's the thought that counts.",
            "Not sure I'll use this, but thanks.",
            "Maybe someone else can make use of this."
        };
        for (int i = 0; i < 5; ++i) {
            bad_gift_responses[i] = temp_bad_gift_responses[i];
        }

        const char* temp_neutral_gift_responses[5] = {
            "Thanks for the gift.",
            "I appreciate it.",
            "This is nice, thank you.",
            "Thanks, this will do.",
            "I appreciate the gesture."
        };
        for (int i = 0; i < 5; ++i) {
            neutral_gift_responses[i] = temp_neutral_gift_responses[i];
        }
    }
};

class Maya_Data {
public:
    const char* maya_phrases[100];
    const char* maya_incomplete_phrases[20];
    const char* options_favorite_thing_maya[5];
    const char* options_best_part_of_day_maya[5];
    const char* options_village_life_since_maya[5];
    const char* options_learned_from_maya[5];
    const char* options_favorite_flower_maya[5];
    const char* options_love_smell_maya[5];
    const char* options_nothing_more_fun_maya[5];
    const char* options_simple_life_maya[5];
    const char* options_favorite_season_maya[5];
    const char* options_believe_hard_work_maya[5];
    const char* options_favorite_tool_maya[5];
    const char* options_village_is_maya[5];
    const char* options_take_pride_in_maya[5];
    const char* options_enjoy_seeing_village_maya[5];
    const char* options_best_memories_from_maya[5];
    const char* options_love_quiet_mornings_maya[5];
    const char* options_favorite_place_to_play_maya[5];
    const char* options_village_life_in_maya[5];
    const char* options_could_talk_about_maya[5];
    const char* options_enjoy_sharing_tips_maya[5];
    const char* good_gift_responses[5];
    const char* bad_gift_responses[5];
    const char* neutral_gift_responses[5];

    // Constructor
    Maya_Data() {
        const char* temp_maya_phrases[100] = {
            "Hi there! How are you today?",
            "I love picking flowers!",
            "Village life is so peaceful.",
            "Do you want to play with me?",
            "I made a flower crown just for you!",
            "The sun is shining so brightly today.",
            "I love the smell of fresh flowers.",
            "Let's go on an adventure!",
            "I baked some cookies. Would you like one?",
            "Life is so simple and beautiful here.",
            "I found a cute little bird today.",
            "Do you like my dress? I made it myself.",
            "I love making new friends.",
            "Everything is so pretty in the village.",
            "I enjoy listening to the birds sing.",
            "The sky is so blue and beautiful.",
            "Let's have a picnic in the meadow!",
            "I love playing with the animals.",
            "Do you want to help me pick flowers?",
            "I feel so happy today!",
            "The village is my favorite place.",
            "I love the sound of the river.",
            "Let's chase butterflies!",
            "The trees are so tall and green.",
            "I found a new flower today.",
            "Let's make a daisy chain together.",
            "Do you want to hear a story?",
            "I love the sound of rain on the roof.",
            "Let's go exploring!",
            "I found a pretty rock. Do you want to see it?",
            "I love dancing in the meadow.",
            "The village is so quiet and peaceful.",
            "I feel so safe here.",
            "Let's catch fireflies tonight.",
            "The stars are so bright tonight.",
            "I love the smell of fresh bread.",
            "Let's build a fort!",
            "I made a new friend today.",
            "The flowers are so colorful.",
            "I love the taste of fresh fruit.",
            "Let's play hide and seek!",
            "The river is so clear and cool.",
            "I found a cute little bunny.",
            "Let's make some crafts!",
            "The meadow is so beautiful.",
            "I love the sound of the wind in the trees.",
            "Let's have a tea party!",
            "I feel so lucky to live here.",
            "The village is full of kind people.",
            "Let's go for a walk!",
            "I love the sound of the village bell.",
            "Let's pick some berries!",
            "I found a beautiful butterfly.",
            "Let's make some music!",
            "The village is so colorful in the fall.",
            "I love the taste of fresh honey.",
            "Let's go fishing!",
            "I feel so happy when I'm with my friends.",
            "The village is so calm and serene.",
            "Let's go for a swim!",
            "I love the smell of fresh grass.",
            "Let's play tag!",
            "The village is full of life.",
            "I feel so joyful today!",
            "Let's go on a treasure hunt!",
            "The village is my happy place.",
            "I love the sound of children's laughter.",
            "Let's make some flower arrangements!",
            "The village is so vibrant in the spring.",
            "I love the taste of fresh milk.",
            "Let's go for a bike ride!",
            "I feel so content here.",
            "The village is so welcoming.",
            "Let's make some art!",
            "The village is full of beautiful gardens.",
            "I love the smell of fresh herbs.",
            "Let's go on a nature walk!",
            "I feel so at peace here.",
            "The village is so cozy in the winter.",
            "Let's build a snowman!",
            "The village is full of wonderful people.",
            "I love the taste of fresh cheese.",
            "Let's go on a boat ride!",
            "I feel so free here.",
            "The village is so charming.",
            "Let's have a bonfire!",
            "The village is full of history.",
            "I love the smell of fresh apples.",
            "Let's make some cider!",
            "The village is so picturesque.",
            "I feel so inspired here.",
            "The village is so magical at night.",
            "Let's make some wishes!",
            "The village is so peaceful at dusk.",
            "I love the sound of the crickets at night.",
            "Let's go stargazing!",
            "The village is my forever home."
        };
        for (int i = 0; i < 100; ++i) {
            maya_phrases[i] = temp_maya_phrases[i];
        }

        const char* temp_maya_incomplete_phrases[20] = {
            "My favorite thing is",
            "The best part of my day is",
            "I've been living in the village since",
            "I learned everything about village life from",
            "My favorite flower is",
            "I love the smell of",
            "There's nothing more fun than",
            "I enjoy the simple life of",
            "My favorite season is",
            "I believe hard work",
            "My favorite tool is",
            "The village is my",
            "I take pride in",
            "I enjoy seeing the village",
            "My best memories are from",
            "I love the quiet mornings in the",
            "My favorite place to play is",
            "Village life is in my",
            "I could talk about",
            "I enjoy sharing tips about"
        };
        for (int i = 0; i < 20; ++i) {
            maya_incomplete_phrases[i] = temp_maya_incomplete_phrases[i];
        }

        const char* temp_options_favorite_thing_maya[5] = {
            "flowers", "animals", "the sun", "the meadow", "the village"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_thing_maya[i] = temp_options_favorite_thing_maya[i];
        }

        const char* temp_options_best_part_of_day_maya[5] = {
            "morning", "playing outside", "picking flowers", "spending time with friends", "evening"
        };
        for (int i = 0; i < 5; ++i) {
            options_best_part_of_day_maya[i] = temp_options_best_part_of_day_maya[i];
        }

        const char* temp_options_village_life_since_maya[5] = {
            "I was a kid", "my teenage years", "my twenties", "I can remember", "last year"
        };
        for (int i = 0; i < 5; ++i) {
            options_village_life_since_maya[i] = temp_options_village_life_since_maya[i];
        }

        const char* temp_options_learned_from_maya[5] = {
            "my mother", "my father", "my grandmother", "my neighbors", "books"
        };
        for (int i = 0; i < 5; ++i) {
            options_learned_from_maya[i] = temp_options_learned_from_maya[i];
        }

        const char* temp_options_favorite_flower_maya[5] = {
            "daisies", "roses", "tulips", "sunflowers", "lilies"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_flower_maya[i] = temp_options_favorite_flower_maya[i];
        }

        const char* temp_options_love_smell_maya[5] = {
            "fresh flowers", "baking bread", "morning dew", "fresh grass", "rain"
        };
        for (int i = 0; i < 5; ++i) {
            options_love_smell_maya[i] = temp_options_love_smell_maya[i];
        }
        const char* temp_options_nothing_more_fun_maya[5] = {
            "picking flowers", "playing with animals", "making crafts", "baking cookies", "exploring the village"
        };
        for (int i = 0; i < 5; ++i) {
            options_nothing_more_fun_maya[i] = temp_options_nothing_more_fun_maya[i];
        }

        const char* temp_options_simple_life_maya[5] = {
            "the village", "the countryside", "the meadow", "the farm", "the homestead"
        };
        for (int i = 0; i < 5; ++i) {
            options_simple_life_maya[i] = temp_options_simple_life_maya[i];
        }

        const char* temp_options_favorite_season_maya[5] = {
            "spring", "summer", "fall", "winter", "flowering season"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_season_maya[i] = temp_options_favorite_season_maya[i];
        }

        const char* temp_options_believe_hard_work_maya[5] = {
            "pays off", "builds character", "is essential", "is rewarding", "makes life better"
        };
        for (int i = 0; i < 5; ++i) {
            options_believe_hard_work_maya[i] = temp_options_believe_hard_work_maya[i];
        }

        const char* temp_options_favorite_tool_maya[5] = {
            "the watering can", "the basket", "the rake", "the hoe", "the shovel"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_tool_maya[i] = temp_options_favorite_tool_maya[i];
        }

        const char* temp_options_village_is_maya[5] = {
            "my home", "my sanctuary", "my playground", "my world", "my paradise"
        };
        for (int i = 0; i < 5; ++i) {
            options_village_is_maya[i] = temp_options_village_is_maya[i];
        }

        const char* temp_options_take_pride_in_maya[5] = {
            "my flowers", "my crafts", "my baking", "my village", "my friends"
        };
        for (int i = 0; i < 5; ++i) {
            options_take_pride_in_maya[i] = temp_options_take_pride_in_maya[i];
        }

        const char* temp_options_enjoy_seeing_village_maya[5] = {
            "my flowers", "the animals", "the people", "the crafts", "the beauty"
        };
        for (int i = 0; i < 5; ++i) {
            options_enjoy_seeing_village_maya[i] = temp_options_enjoy_seeing_village_maya[i];
        }

        const char* temp_options_best_memories_from_maya[5] = {
            "the village", "childhood", "playing", "friends", "family"
        };
        for (int i = 0; i < 5; ++i) {
            options_best_memories_from_maya[i] = temp_options_best_memories_from_maya[i];
        }

        const char* temp_options_love_quiet_mornings_maya[5] = {
            "the village", "the meadow", "the countryside", "the farm", "the homestead"
        };
        for (int i = 0; i < 5; ++i) {
            options_love_quiet_mornings_maya[i] = temp_options_love_quiet_mornings_maya[i];
        }

        const char* temp_options_favorite_place_to_play_maya[5] = {
            "the meadow", "the village", "the riverbank", "the forest edge", "the garden"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_place_to_play_maya[i] = temp_options_favorite_place_to_play_maya[i];
        }

        const char* temp_options_village_life_in_maya[5] = {
            "blood", "family", "nature", "soul", "heart"
        };
        for (int i = 0; i < 5; ++i) {
            options_village_life_in_maya[i] = temp_options_village_life_in_maya[i];
        }

        const char* temp_options_could_talk_about_maya[5] = {
            "flowers", "animals", "village life", "friends", "baking"
        };
        for (int i = 0; i < 5; ++i) {
            options_could_talk_about_maya[i] = temp_options_could_talk_about_maya[i];
        }

        const char* temp_options_enjoy_sharing_tips_maya[5] = {
            "gardening", "baking", "crafting", "playing", "exploring"
        };
        for (int i = 0; i < 5; ++i) {
            options_enjoy_sharing_tips_maya[i] = temp_options_enjoy_sharing_tips_maya[i];
        }

        const char* temp_good_gift_responses[5] = {
            "Oh, thank you so much! This is lovely!",
            "Wow, this is perfect! Thank you!",
            "I really appreciate this! It's so nice!",
            "This is just what I needed! Thank you!",
            "You've made my day with this gift! Thanks!"
        };
        for (int i = 0; i < 5; ++i) {
            good_gift_responses[i] = temp_good_gift_responses[i];
        }

        const char* temp_bad_gift_responses[5] = {
            "Oh, um, thanks... I think.",
            "I appreciate the thought, but this isn't really my thing.",
            "Well, it's the thought that counts, right?",
            "I'm not sure what to do with this, but thanks.",
            "Maybe someone else can use this. Thanks anyway."
        };
        for (int i = 0; i < 5; ++i) {
            bad_gift_responses[i] = temp_bad_gift_responses[i];
        }

        const char* temp_neutral_gift_responses[5] = {
            "Thank you for the gift.",
            "I appreciate it.",
            "This is nice, thank you.",
            "Thanks, this will do.",
            "I appreciate the gesture."
        };
        for (int i = 0; i < 5; ++i) {
            neutral_gift_responses[i] = temp_neutral_gift_responses[i];
        }
    }
};

class Mike_Data {
public:
    const char* mike_phrases[100];
    const char* mike_incomplete_phrases[20];
    const char* options_favorite_thing_mike[5];
    const char* options_best_part_of_day_mike[5];
    const char* options_paranoid_since_mike[5];
    const char* options_learned_from_mike[5];
    const char* options_favorite_hobby_mike[5];
    const char* options_love_smell_mike[5];
    const char* options_nothing_more_relaxing_mike[5];
    const char* options_simple_life_mike[5];
    const char* options_favorite_season_mike[5];
    const char* options_believe_preparedness_mike[5];
    const char* options_favorite_tool_mike[5];
    const char* options_home_is_mike[5];
    const char* options_take_pride_in_mike[5];
    const char* options_enjoy_seeing_safety_mike[5];
    const char* options_best_memories_from_mike[5];
    const char* options_love_quiet_mornings_mike[5];
    const char* options_favorite_place_to_hide_mike[5];
    const char* options_cautiousness_in_mike[5];
    const char* options_could_talk_about_mike[5];
    const char* options_enjoy_sharing_tips_mike[5];
    const char* good_gift_responses[5];
    const char* bad_gift_responses[5];
    const char* neutral_gift_responses[5];

    // Constructor
    Mike_Data() {
        const char* temp_mike_phrases[100] = {
            "Hey there! How's it going?",
            "Always stay prepared, you never know what might happen.",
            "I'm here to help, just let me know.",
            "Have you checked the locks recently?",
            "Better safe than sorry, right?",
            "I love a good chat, but let's keep it quiet.",
            "Let's keep an eye out, just in case.",
            "It's a beautiful day, but always be cautious.",
            "Need any help? I'm always here.",
            "I've got your back, no worries.",
            "Have you noticed anything strange lately?",
            "I enjoy helping out, makes me feel useful.",
            "Stay vigilant, you never know.",
            "It's great to see you! Stay safe.",
            "Do you have an escape plan?",
            "Let's stick together, it's safer that way.",
            "Everything seems fine, but let's be careful.",
            "I'm just being cautious, nothing to worry about.",
            "Always good to have a backup plan.",
            "Do you hear that? Oh, maybe it's nothing.",
            "I enjoy peaceful moments, but always alert.",
            "Stay friendly, but keep your guard up.",
            "Do you know where the nearest exit is?",
            "Let's keep things calm and collected.",
            "Better to be prepared than caught off guard.",
            "I enjoy your company, let's stay vigilant.",
            "Have you double-checked everything?",
            "I'm always watching out for us.",
            "It's important to stay friendly and alert.",
            "Let's not take any chances.",
            "I trust you, just stay cautious.",
            "Let's enjoy the moment, but stay prepared.",
            "Have you noticed any suspicious activity?",
            "I love a good story, but let's keep our ears open.",
            "Better to be safe than sorry, always.",
            "Let's keep a low profile, just in case.",
            "I'm just being careful, don't mind me.",
            "Always good to know the nearest hideout.",
            "Let's keep things secure around here.",
            "Do you think everything is okay?",
            "I enjoy our talks, let's stay safe.",
            "Do you have an emergency plan?",
            "I'm here for you, let's stay alert.",
            "It's a lovely day, but always be prepared.",
            "I trust you, let's just stay cautious.",
            "Better to be ready for anything.",
            "Do you have a backup plan?",
            "I'm always here to help, just let me know.",
            "Let's keep our eyes and ears open.",
            "Stay friendly, stay cautious.",
            "Do you know where the safe spots are?",
            "I'm here to help, let's stay prepared.",
            "Always good to have a plan B.",
            "Let's enjoy the day, but stay alert.",
            "I'm here for you, just stay cautious.",
            "Do you hear that? Oh, maybe it's nothing.",
            "I enjoy peaceful moments, but always alert.",
            "Stay friendly, but keep your guard up.",
            "Do you know where the nearest exit is?",
            "Let's keep things calm and collected.",
            "Better to be prepared than caught off guard.",
            "I enjoy your company, let's stay vigilant.",
            "Have you double-checked everything?",
            "I'm always watching out for us.",
            "It's important to stay friendly and alert.",
            "Let's not take any chances.",
            "I trust you, just stay cautious.",
            "Let's enjoy the moment, but stay prepared.",
            "Have you noticed any suspicious activity?",
            "I love a good story, but let's keep our ears open.",
            "Better to be safe than sorry, always.",
            "Let's keep a low profile, just in case.",
            "I'm just being careful, don't mind me.",
            "Always good to know the nearest hideout.",
            "Let's keep things secure around here.",
            "Do you think everything is okay?",
            "I enjoy our talks, let's stay safe.",
            "Do you have an emergency plan?",
            "I'm here for you, let's stay alert.",
            "It's a lovely day, but always be prepared.",
            "I trust you, let's just stay cautious.",
            "Better to be ready for anything.",
            "Do you have a backup plan?",
            "I'm always here to help, just let me know.",
            "Let's keep our eyes and ears open.",
            "Stay friendly, stay cautious.",
            "Do you know where the safe spots are?",
            "I'm here to help, let's stay prepared.",
            "Always good to have a plan B.",
            "Let's enjoy the day, but stay alert.",
            "I'm here for you, just stay cautious."
        };
        for (int i = 0; i < 100; ++i) {
            mike_phrases[i] = temp_mike_phrases[i];
        }

        const char* temp_mike_incomplete_phrases[20] = {
            "My favorite thing is",
            "The best part of my day is",
            "I've been paranoid since",
            "I learned everything about preparedness from",
            "My favorite hobby is",
            "I love the smell of",
            "There's nothing more relaxing than",
            "I enjoy the simple life of",
            "My favorite season is",
            "I believe preparedness",
            "My favorite tool is",
            "Home is my",
            "I take pride in",
            "I enjoy seeing safety in",
            "My best memories are from",
            "I love the quiet mornings in",
            "My favorite place to hide is",
            "Cautiousness is in my",
            "I could talk about",
            "I enjoy sharing tips about"
        };
        for (int i = 0; i < 20; ++i) {
            mike_incomplete_phrases[i] = temp_mike_incomplete_phrases[i];
        }

        const char* temp_options_favorite_thing_mike[5] = {
            "security", "safety", "preparedness", "peace of mind", "being alert"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_thing_mike[i] = temp_options_favorite_thing_mike[i];
        }

        const char* temp_options_best_part_of_day_mike[5] = {
            "morning", "checking the locks", "scanning the area", "staying alert", "evening"
        };
        for (int i = 0; i < 5; ++i) {
            options_best_part_of_day_mike[i] = temp_options_best_part_of_day_mike[i];
        }

        const char* temp_options_paranoid_since_mike[5] = {
            "I was a kid", "my teenage years", "my twenties", "I can remember", "last year"
        };
        for (int i = 0; i < 5; ++i) {
            options_paranoid_since_mike[i] = temp_options_paranoid_since_mike[i];
        }

        const char* temp_options_learned_from_mike[5] = {
            "my father", "my mother", "my grandfather", "my neighbor", "books"
        };
        for (int i = 0; i < 5; ++i) {
            options_learned_from_mike[i] = temp_options_learned_from_mike[i];
        }

        const char* temp_options_favorite_hobby_mike[5] = {
            "gardening", "reading", "hiking", "fishing", "watching the stars"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_hobby_mike[i] = temp_options_favorite_hobby_mike[i];
        }
        const char* temp_options_love_smell_mike[5] = {
            "fresh air", "cut grass", "rain", "wood", "coffee"
        };
        for (int i = 0; i < 5; ++i) {
            options_love_smell_mike[i] = temp_options_love_smell_mike[i];
        }

        const char* temp_options_nothing_more_relaxing_mike[5] = {
            "a quiet evening", "a safe home", "a good book", "a calm day", "a walk in nature"
        };
        for (int i = 0; i < 5; ++i) {
            options_nothing_more_relaxing_mike[i] = temp_options_nothing_more_relaxing_mike[i];
        }

        const char* temp_options_simple_life_mike[5] = {
            "the village", "the countryside", "the homestead", "the garden", "the farm"
        };
        for (int i = 0; i < 5; ++i) {
            options_simple_life_mike[i] = temp_options_simple_life_mike[i];
        }

        const char* temp_options_favorite_season_mike[5] = {
            "spring", "summer", "fall", "winter", "harvest season"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_season_mike[i] = temp_options_favorite_season_mike[i];
        }

        const char* temp_options_believe_preparedness_mike[5] = {
            "is key", "builds character", "is essential", "is rewarding", "makes life better"
        };
        for (int i = 0; i < 5; ++i) {
            options_believe_preparedness_mike[i] = temp_options_believe_preparedness_mike[i];
        }

        const char* temp_options_favorite_tool_mike[5] = {
            "the lock", "the hammer", "the knife", "the flashlight", "the map"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_tool_mike[i] = temp_options_favorite_tool_mike[i];
        }

        const char* temp_options_home_is_mike[5] = {
            "my sanctuary", "my safe place", "my haven", "my fortress", "my world"
        };
        for (int i = 0; i < 5; ++i) {
            options_home_is_mike[i] = temp_options_home_is_mike[i];
        }

        const char* temp_options_take_pride_in_mike[5] = {
            "my security", "my vigilance", "my preparedness", "my home", "my family"
        };
        for (int i = 0; i < 5; ++i) {
            options_take_pride_in_mike[i] = temp_options_take_pride_in_mike[i];
        }

        const char* temp_options_enjoy_seeing_safety_mike[5] = {
            "my precautions", "my vigilance", "my safety measures", "the secured area", "the calm environment"
        };
        for (int i = 0; i < 5; ++i) {
            options_enjoy_seeing_safety_mike[i] = temp_options_enjoy_seeing_safety_mike[i];
        }

        const char* temp_options_best_memories_from_mike[5] = {
            "the village", "childhood", "family time", "safe moments", "quiet times"
        };
        for (int i = 0; i < 5; ++i) {
            options_best_memories_from_mike[i] = temp_options_best_memories_from_mike[i];
        }

        const char* temp_options_love_quiet_mornings_mike[5] = {
            "the village", "the countryside", "the garden", "the farm", "the homestead"
        };
        for (int i = 0; i < 5; ++i) {
            options_love_quiet_mornings_mike[i] = temp_options_love_quiet_mornings_mike[i];
        }

        const char* temp_options_favorite_place_to_hide_mike[5] = {
            "the basement", "the attic", "the shed", "the barn", "the secret room"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_place_to_hide_mike[i] = temp_options_favorite_place_to_hide_mike[i];
        }

        const char* temp_options_cautiousness_in_mike[5] = {
            "blood", "family", "nature", "soul", "heart"
        };
        for (int i = 0; i < 5; ++i) {
            options_cautiousness_in_mike[i] = temp_options_cautiousness_in_mike[i];
        }

        const char* temp_options_could_talk_about_mike[5] = {
            "preparedness", "security", "safety measures", "home safety", "being vigilant"
        };
        for (int i = 0; i < 5; ++i) {
            options_could_talk_about_mike[i] = temp_options_could_talk_about_mike[i];
        }

        const char* temp_options_enjoy_sharing_tips_mike[5] = {
            "safety", "preparedness", "home security", "vigilance", "emergency plans"
        };
        for (int i = 0; i < 5; ++i) {
            options_enjoy_sharing_tips_mike[i] = temp_options_enjoy_sharing_tips_mike[i];
        }

        const char* temp_good_gift_responses[5] = {
            "Thank you, this will definitely come in handy!",
            "I really appreciate this! It's perfect for me.",
            "You've got a good eye for gifts! Thanks a lot!",
            "This will help keep things secure. Thanks!",
            "You've made my day with this gift. Thank you!"
        };
        for (int i = 0; i < 5; ++i) {
            good_gift_responses[i] = temp_good_gift_responses[i];
        }

        const char* temp_bad_gift_responses[5] = {
            "Oh, uh, thanks... I guess.",
            "I appreciate the thought, but this isn't really my thing.",
            "Well, it's the thought that counts, right?",
            "I don't really have a use for this, but thanks anyway.",
            "Maybe someone else can use this. Thanks."
        };
        for (int i = 0; i < 5; ++i) {
            bad_gift_responses[i] = temp_bad_gift_responses[i];
        }

        const char* temp_neutral_gift_responses[5] = {
            "Thanks for the gift.",
            "I appreciate it.",
            "This is nice, thank you.",
            "Thanks, this will do.",
            "I appreciate the gesture."
        };
        for (int i = 0; i < 5; ++i) {
            neutral_gift_responses[i] = temp_neutral_gift_responses[i];
        }
    }
};

class Trevor_Data {
public:
    const char* trevor_phrases[100];
    const char* trevor_incomplete_phrases[20];
    const char* options_favorite_thing_trevor[5];
    const char* options_best_part_of_day_trevor[5];
    const char* options_war_veteran_since_trevor[5];
    const char* options_learned_from_trevor[5];
    const char* options_favorite_weapon_trevor[5];
    const char* options_love_smell_trevor[5];
    const char* options_nothing_more_rewarding_trevor[5];
    const char* options_simple_life_trevor[5];
    const char* options_favorite_season_trevor[5];
    const char* options_believe_strength_trevor[5];
    const char* options_favorite_tool_trevor[5];
    const char* options_home_is_trevor[5];
    const char* options_take_pride_in_trevor[5];
    const char* options_enjoy_seeing_peace_trevor[5];
    const char* options_best_memories_from_trevor[5];
    const char* options_love_quiet_mornings_trevor[5];
    const char* options_favorite_place_to_reflect_trevor[5];
    const char* options_wisdom_in_trevor[5];
    const char* options_could_talk_about_trevor[5];
    const char* options_enjoy_sharing_tips_trevor[5];
    const char* good_gift_responses[5];
    const char* bad_gift_responses[5];
    const char* neutral_gift_responses[5];

    // Constructor
    Trevor_Data() {
        const char* temp_trevor_phrases[100] = {
            "What do you want now?",
            "Don't waste my time.",
            "I fought in wars, I've seen enough nonsense.",
            "You think you can handle this? Think again.",
            "Strength comes from within, not from your blabbering.",
            "I've survived worse, don't test me.",
            "Respect your elders, or else.",
            "Every day is a challenge, deal with it.",
            "War taught me the value of peace, something you wouldn't understand.",
            "Stay strong, even if you're as weak as you look.",
            "Courage is doing what needs to be done, even if you're scared.",
            "I've seen things that would make you run home crying.",
            "Discipline is what you lack, clearly.",
            "There's no substitute for hard work, not that you'd know.",
            "I've trained my body and mind to endure the toughest conditions.",
            "Peace is the ultimate goal, but strength is necessary to achieve it.",
            "Never underestimate the power of resilience.",
            "I carry the weight of many battles.",
            "Wisdom is earned through experience, not from your yappering.",
            "Stay vigilant and stay strong.",
            "War may be hell, but it forges the strongest souls.",
            "Every scar tells a story, but you wouldn't get it.",
            "I've fought for my country, now I fight for my peace.",
            "Strength and wisdom go hand in hand.",
            "I've seen the worst of humanity, but I still believe in the best.",
            "Keep your head high, no matter the challenge.",
            "I've faced my fears and come out stronger.",
            "There's a lesson in every hardship, learn it.",
            "I've lived a life full of battles, both physical and mental.",
            "Always be ready to defend what's important to you.",
            "The world is a harsh place, but you must remain strong.",
            "Wisdom isn't just about knowing, it's about understanding.",
            "Strength isn't just physical, it's also mental.",
            "I've seen the face of war, and it's not pretty.",
            "Life is a journey, and every step makes you stronger.",
            "I've faced the enemy and come out victorious.",
            "Always be prepared for the worst, but hope for the best.",
            "I've been through hell and back, and I'm still standing.",
            "Strength is built through adversity.",
            "I've learned to appreciate the simple things in life.",
            "Wisdom is the reward of a lifetime of experiences.",
            "I've fought many battles, but the hardest one is within.",
            "Always stay true to your principles.",
            "I've seen the darkest sides of life, but I still find the light.",
            "Courage is doing what needs to be done, even when you're scared.",
            "I've trained my body to be a fortress.",
            "Discipline is the foundation of strength.",
            "I've faced my demons and conquered them.",
            "Stay vigilant, stay prepared.",
            "I've learned that peace is worth fighting for.",
            "Strength comes from overcoming challenges.",
            "I've been through the toughest trials, and I'm still here.",
            "Wisdom comes from experience, not age.",
            "I've seen the horrors of war, but I still have hope.",
            "Strength and honor are my guiding principles.",
            "I've fought battles most can't imagine.",
            "Every challenge is an opportunity to grow stronger.",
            "I've seen the worst, but I still believe in the best.",
            "Discipline and strength go hand in hand.",
            "I've trained my mind to be as strong as my body.",
            "Always be ready for the unexpected.",
            "I've faced death and come out victorious.",
            "Strength is forged in the fires of adversity.",
            "I've learned to find peace in the midst of chaos.",
            "Wisdom is the fruit of a life well-lived.",
            "I've fought for my country and my loved ones.",
            "Strength is about more than just muscle.",
            "I've faced my fears and emerged stronger.",
            "Every battle teaches a lesson.",
            "I've seen the face of the enemy and it's not pretty.",
            "Always stay strong, no matter the odds.",
            "I've been through hell, but it made me who I am.",
            "Strength is built one day at a time.",
            "I've learned to appreciate every moment of peace.",
            "Wisdom is the reward for surviving life's battles.",
            "I've faced the toughest challenges and come out on top.",
            "Always be ready to defend your beliefs.",
            "I've seen the worst of times, but I still have hope.",
            "Strength is about never giving up.",
            "I've fought for my life and my freedom.",
            "Discipline is the key to success.",
            "I've learned that peace is worth fighting for.",
            "Strength comes from within.",
            "I've faced my darkest fears and conquered them.",
            "Every battle leaves a mark, but it also makes you stronger.",
            "I've seen the horrors of war, but I still believe in humanity.",
            "Always stay true to yourself.",
            "I've fought battles most can't imagine.",
            "Every challenge is an opportunity to grow stronger.",
            "I've seen the worst, but I still believe in the best.",
            "Discipline and strength go hand in hand.",
            "I've trained my mind to be as strong as my body.",
            "Always be ready for the unexpected."
        };
        for (int i = 0; i < 100; ++i) {
            trevor_phrases[i] = temp_trevor_phrases[i];
        }

        const char* temp_trevor_incomplete_phrases[20] = {
            "My favorite thing is",
            "The best part of my day is",
            "I've been a war veteran since",
            "I learned everything about strength from",
            "My favorite weapon is",
            "I love the smell of",
            "There's nothing more rewarding than",
            "I enjoy the simple life of",
            "My favorite season is",
            "I believe strength",
            "My favorite tool is",
            "Home is my",
            "I take pride in",
            "I enjoy seeing peace in",
            "My best memories are from",
            "I love the quiet mornings in",
            "My favorite place to reflect is",
            "Wisdom is in my",
            "I could talk about",
            "I enjoy sharing tips about"
        };
        for (int i = 0; i < 20; ++i) {
            trevor_incomplete_phrases[i] = temp_trevor_incomplete_phrases[i];
        }

        const char* temp_options_favorite_thing_trevor[5] = {
            "discipline", "strength", "peace", "wisdom", "training"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_thing_trevor[i] = temp_options_favorite_thing_trevor[i];
        }

        const char* temp_options_best_part_of_day_trevor[5] = {
            "morning", "training", "meditation", "helping others", "reflecting"
        };
        for (int i = 0; i < 5; ++i) {
            options_best_part_of_day_trevor[i] = temp_options_best_part_of_day_trevor[i];
        }const char* temp_options_war_veteran_since_trevor[5] = {
            "I was a young man", "my early years", "my twenties", "I can remember", "last war"
        };
        for (int i = 0; i < 5; ++i) {
            options_war_veteran_since_trevor[i] = temp_options_war_veteran_since_trevor[i];
        }

        const char* temp_options_learned_from_trevor[5] = {
            "my father", "my mentor", "my experiences", "my battles", "my comrades"
        };
        for (int i = 0; i < 5; ++i) {
            options_learned_from_trevor[i] = temp_options_learned_from_trevor[i];
        }

        const char* temp_options_favorite_weapon_trevor[5] = {
            "rifle", "knife", "hand-to-hand combat", "strategic mind", "my strength"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_weapon_trevor[i] = temp_options_favorite_weapon_trevor[i];
        }

        const char* temp_options_love_smell_trevor[5] = {
            "gunpowder", "fresh air", "morning dew", "victory", "peace"
        };
        for (int i = 0; i < 5; ++i) {
            options_love_smell_trevor[i] = temp_options_love_smell_trevor[i];
        }

        const char* temp_options_nothing_more_rewarding_trevor[5] = {
            "a hard day's work", "seeing progress", "achieving goals", "helping others", "training"
        };
        for (int i = 0; i < 5; ++i) {
            options_nothing_more_rewarding_trevor[i] = temp_options_nothing_more_rewarding_trevor[i];
        }

        const char* temp_options_simple_life_trevor[5] = {
            "the village", "the countryside", "the homestead", "the quiet", "the peace"
        };
        for (int i = 0; i < 5; ++i) {
            options_simple_life_trevor[i] = temp_options_simple_life_trevor[i];
        }

        const char* temp_options_favorite_season_trevor[5] = {
            "spring", "summer", "fall", "winter", "training season"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_season_trevor[i] = temp_options_favorite_season_trevor[i];
        }

        const char* temp_options_believe_strength_trevor[5] = {
            "is key", "builds character", "is essential", "is rewarding", "makes life better"
        };
        for (int i = 0; i < 5; ++i) {
            options_believe_strength_trevor[i] = temp_options_believe_strength_trevor[i];
        }

        const char* temp_options_favorite_tool_trevor[5] = {
            "the hammer", "the axe", "the knife", "the rifle", "the mind"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_tool_trevor[i] = temp_options_favorite_tool_trevor[i];
        }

        const char* temp_options_home_is_trevor[5] = {
            "my sanctuary", "my fortress", "my safe place", "my retreat", "my world"
        };
        for (int i = 0; i < 5; ++i) {
            options_home_is_trevor[i] = temp_options_home_is_trevor[i];
        }

        const char* temp_options_take_pride_in_trevor[5] = {
            "my strength", "my discipline", "my wisdom", "my experiences", "my training"
        };
        for (int i = 0; i < 5; ++i) {
            options_take_pride_in_trevor[i] = temp_options_take_pride_in_trevor[i];
        }

        const char* temp_options_enjoy_seeing_peace_trevor[5] = {
            "my home", "the village", "the countryside", "the people", "the land"
        };
        for (int i = 0; i < 5; ++i) {
            options_enjoy_seeing_peace_trevor[i] = temp_options_enjoy_seeing_peace_trevor[i];
        }

        const char* temp_options_best_memories_from_trevor[5] = {
            "the war", "my youth", "training", "family", "friends"
        };
        for (int i = 0; i < 5; ++i) {
            options_best_memories_from_trevor[i] = temp_options_best_memories_from_trevor[i];
        }

        const char* temp_options_love_quiet_mornings_trevor[5] = {
            "the village", "the countryside", "the homestead", "the training ground", "the forest"
        };
        for (int i = 0; i < 5; ++i) {
            options_love_quiet_mornings_trevor[i] = temp_options_love_quiet_mornings_trevor[i];
        }

        const char* temp_options_favorite_place_to_reflect_trevor[5] = {
            "the forest", "the mountains", "the riverbank", "the training ground", "the porch"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_place_to_reflect_trevor[i] = temp_options_favorite_place_to_reflect_trevor[i];
        }

        const char* temp_options_wisdom_in_trevor[5] = {
            "blood", "experience", "battle", "soul", "heart"
        };
        for (int i = 0; i < 5; ++i) {
            options_wisdom_in_trevor[i] = temp_options_wisdom_in_trevor[i];
        }

        const char* temp_options_could_talk_about_trevor[5] = {
            "strength", "discipline", "training", "war stories", "life lessons"
        };
        for (int i = 0; i < 5; ++i) {
            options_could_talk_about_trevor[i] = temp_options_could_talk_about_trevor[i];
        }

        const char* temp_options_enjoy_sharing_tips_trevor[5] = {
            "training", "strength building", "discipline", "survival", "self-defense"
        };
        for (int i = 0; i < 5; ++i) {
            options_enjoy_sharing_tips_trevor[i] = temp_options_enjoy_sharing_tips_trevor[i];
        }

        const char* temp_good_gift_responses[5] = {
            "Thank you, this will be useful.",
            "I appreciate this. It's a good gift.",
            "You've chosen well, thank you.",
            "This will come in handy, thanks.",
            "You've given me something valuable, thanks."
        };
        for (int i = 0; i < 5; ++i) {
            good_gift_responses[i] = temp_good_gift_responses[i];
        }

        const char* temp_bad_gift_responses[5] = {
            "What am I supposed to do with this?",
            "This isn't useful to me.",
            "I appreciate the thought, but this isn't for me.",
            "Thanks, but no thanks.",
            "Maybe someone else can use this."
        };
        for (int i = 0; i < 5; ++i) {
            bad_gift_responses[i] = temp_bad_gift_responses[i];
        }

        const char* temp_neutral_gift_responses[5] = {
            "Thanks for the gift.",
            "I appreciate it.",
            "This is nice, thank you.",
            "Thanks, this will do.",
            "I appreciate the gesture."
        };
        for (int i = 0; i < 5; ++i) {
            neutral_gift_responses[i] = temp_neutral_gift_responses[i];
        }
    }
};

class Liz_Data {
public:
    const char* liz_phrases[100];
    const char* liz_incomplete_phrases[20];
    const char* options_favorite_thing_liz[5];
    const char* options_best_part_of_day_liz[5];
    const char* options_strong_since_liz[5];
    const char* options_learned_from_liz[5];
    const char* options_favorite_weapon_liz[5];
    const char* options_love_smell_liz[5];
    const char* options_nothing_more_exciting_liz[5];
    const char* options_simple_life_liz[5];
    const char* options_favorite_season_liz[5];
    const char* options_believe_strength_liz[5];
    const char* options_favorite_tool_liz[5];
    const char* options_home_is_liz[5];
    const char* options_take_pride_in_liz[5];
    const char* options_enjoy_seeing_challenges_liz[5];
    const char* options_best_memories_from_liz[5];
    const char* options_love_quiet_mornings_liz[5];
    const char* options_favorite_place_to_train_liz[5];
    const char* options_rudeness_in_liz[5];
    const char* options_could_talk_about_liz[5];
    const char* options_enjoy_sharing_tips_liz[5];
    const char* good_gift_responses[5];
    const char* bad_gift_responses[5];
    const char* neutral_gift_responses[5];

    // Constructor
    Liz_Data() {
        const char* temp_liz_phrases[100] = {
            "What do you want?",
            "Don't waste my time.",
            "You think you can keep up with me?",
            "Move it, I'm busy.",
            "Strength is everything, get it through your head.",
            "I've got no time for your nonsense.",
            "Respect me or get out of my way.",
            "Every day is a new battle.",
            "If you can't handle it, step aside.",
            "Don't bother me with your problems.",
            "I don't need your help.",
            "Just do what I say and we'll be fine.",
            "Discipline is key, but you wouldn't understand.",
            "I'm not here to make friends.",
            "Get stronger or get lost.",
            "I don't have patience for weakness.",
            "Stop whining and start working.",
            "I learned from the best, now back off.",
            "You want to try me? Think again.",
            "I'm not here to play nice.",
            "Strength is earned, not given.",
            "You think you're tough? Prove it.",
            "I've got better things to do than listen to you.",
            "I'm not interested in your excuses.",
            "Push harder or get out of my sight.",
            "I'm strong because I don't let anything stand in my way.",
            "Respect is earned through strength.",
            "If you can't keep up, don't slow me down.",
            "Strength comes from within, not from words.",
            "Get out of my way.",
            "I'm here to win, not to make friends.",
            "Discipline is everything.",
            "I'm not here to coddle you.",
            "Show me what you've got or leave.",
            "I'm not afraid of a challenge.",
            "Strength is my language.",
            "Don't talk, just do.",
            "I'm not interested in your problems.",
            "If you're weak, don't waste my time.",
            "I'm stronger than you'll ever be.",
            "Show respect or face the consequences.",
            "Don't think you can mess with me.",
            "I don't have time for weakness.",
            "Strength is what matters.",
            "I'm not here to babysit.",
            "If you can't handle it, leave.",
            "I'm tough because I have to be.",
            "Respect me or get out of my way.",
            "I'm not here to play games.",
            "Strength is my priority.",
            "Don't waste my time with excuses.",
            "If you want to talk, make it quick.",
            "I don't need your approval.",
            "Push harder or leave.",
            "I'm here to work, not to chat.",
            "Strength is everything to me.",
            "I'm not interested in small talk.",
            "Show strength or leave.",
            "I'm not here to make friends.",
            "If you can't keep up, step aside.",
            "Discipline is key.",
            "I'm not here to be nice.",
            "Strength is my focus.",
            "Don't bother me if you're weak.",
            "I'm stronger than you think.",
            "Respect is earned, not given.",
            "I'm not interested in your problems.",
            "If you're not strong, don't waste my time.",
            "I'm tough because I have to be.",
            "Strength is what I value.",
            "Don't think you can mess with me.",
            "I'm not here to babysit.",
            "Strength is my priority.",
            "Don't waste my time.",
            "If you can't handle it, leave.",
            "I'm not interested in excuses.",
            "Show me your strength or leave.",
            "I'm here to work, not to chat.",
            "Strength is everything.",
            "I'm not here to be nice.",
            "Discipline is key.",
            "Don't waste my time if you're weak.",
            "I'm stronger than you'll ever be.",
            "Respect is earned.",
            "I'm not here to play games.",
            "If you want to talk, make it quick.",
            "Strength is my focus.",
            "Don't bother me if you're weak.",
            "I'm tough because I have to be.",
            "Strength is what matters to me.",
            "Show respect or get out of my way.",
            "I'm not here to coddle you.",
            "Strength is my language.",
            "I'm not interested in your problems.",
            "If you're weak, don't waste my time.",
            "I'm here to work, not to chat.",
            "Strength is everything.",
            "Show me your strength or leave.",
            "I'm not interested in small talk.",
            "Discipline is everything to me."
        };
        for (int i = 0; i < 100; ++i) {
            liz_phrases[i] = temp_liz_phrases[i];
        }

        const char* temp_liz_incomplete_phrases[20] = {
            "My favorite thing is",
            "The best part of my day is",
            "I've been strong since",
            "I learned everything about strength from",
            "My favorite weapon is",
            "I love the smell of",
            "There's nothing more exciting than",
            "I enjoy the simple life of",
            "My favorite season is",
            "I believe strength",
            "My favorite tool is",
            "Home is my",
            "I take pride in",
            "I enjoy seeing challenges in",
            "My best memories are from",
            "I love the quiet mornings in",
            "My favorite place to train is",
            "Rudeness is in my",
            "I could talk about",
            "I enjoy sharing tips about"
        };
        for (int i = 0; i < 20; ++i) {
            liz_incomplete_phrases[i] = temp_liz_incomplete_phrases[i];
        }

        const char* temp_options_favorite_thing_liz[5] = {
            "training", "fighting", "winning", "proving myself", "being strong"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_thing_liz[i] = temp_options_favorite_thing_liz[i];
        }

        const char* temp_options_best_part_of_day_liz[5] = {
            "morning workout", "training", "fighting", "winning", "evening reflection"
        };
        for (int i = 0; i < 5; ++i) {
            options_best_part_of_day_liz[i] = temp_options_best_part_of_day_liz[i];
        }

        const char* temp_options_strong_since_liz[5] = {
            "I was a kid", "my teenage years", "my early twenties", "I can remember", "my first fight"
        };
        for (int i = 0; i < 5; ++i) {
            options_strong_since_liz[i] = temp_options_strong_since_liz[i];
        }

        const char* temp_options_learned_from_liz[5] = {
            "my father", "my mentor", "my experiences", "my fights", "my training"
        };
        for (int i = 0; i < 5; ++i) {
            options_learned_from_liz[i] = temp_options_learned_from_liz[i];
        }

        const char* temp_options_favorite_weapon_liz[5] = {
            "fists", "knife", "stick", "my strength", "anything I can find"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_weapon_liz[i] = temp_options_favorite_weapon_liz[i];
        }
        const char* temp_options_love_smell_liz[5] = {
            "sweat", "victory", "adrenaline", "hard work", "the outdoors"
        };
        for (int i = 0; i < 5; ++i) {
            options_love_smell_liz[i] = temp_options_love_smell_liz[i];
        }

        const char* temp_options_nothing_more_exciting_liz[5] = {
            "a tough workout", "a good fight", "winning a challenge", "proving myself", "overcoming obstacles"
        };
        for (int i = 0; i < 5; ++i) {
            options_nothing_more_exciting_liz[i] = temp_options_nothing_more_exciting_liz[i];
        }

        const char* temp_options_simple_life_liz[5] = {
            "the village", "the countryside", "the homestead", "the training ground", "the farm"
        };
        for (int i = 0; i < 5; ++i) {
            options_simple_life_liz[i] = temp_options_simple_life_liz[i];
        }

        const char* temp_options_favorite_season_liz[5] = {
            "spring", "summer", "fall", "winter", "training season"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_season_liz[i] = temp_options_favorite_season_liz[i];
        }

        const char* temp_options_believe_strength_liz[5] = {
            "is key", "builds character", "is essential", "is rewarding", "makes life better"
        };
        for (int i = 0; i < 5; ++i) {
            options_believe_strength_liz[i] = temp_options_believe_strength_liz[i];
        }

        const char* temp_options_favorite_tool_liz[5] = {
            "the axe", "the shovel", "the knife", "my fists", "the hammer"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_tool_liz[i] = temp_options_favorite_tool_liz[i];
        }

        const char* temp_options_home_is_liz[5] = {
            "my sanctuary", "my training ground", "my safe place", "my retreat", "my world"
        };
        for (int i = 0; i < 5; ++i) {
            options_home_is_liz[i] = temp_options_home_is_liz[i];
        }

        const char* temp_options_take_pride_in_liz[5] = {
            "my strength", "my discipline", "my toughness", "my training", "my resilience"
        };
        for (int i = 0; i < 5; ++i) {
            options_take_pride_in_liz[i] = temp_options_take_pride_in_liz[i];
        }

        const char* temp_options_enjoy_seeing_challenges_liz[5] = {
            "my training", "my strength", "my discipline", "my resilience", "my toughness"
        };
        for (int i = 0; i < 5; ++i) {
            options_enjoy_seeing_challenges_liz[i] = temp_options_enjoy_seeing_challenges_liz[i];
        }

        const char* temp_options_best_memories_from_liz[5] = {
            "training", "fighting", "winning", "childhood", "family"
        };
        for (int i = 0; i < 5; ++i) {
            options_best_memories_from_liz[i] = temp_options_best_memories_from_liz[i];
        }

        const char* temp_options_love_quiet_mornings_liz[5] = {
            "the training ground", "the village", "the countryside", "the farm", "the homestead"
        };
        for (int i = 0; i < 5; ++i) {
            options_love_quiet_mornings_liz[i] = temp_options_love_quiet_mornings_liz[i];
        }

        const char* temp_options_favorite_place_to_train_liz[5] = {
            "the gym", "the training ground", "the forest", "the yard", "the farm"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_place_to_train_liz[i] = temp_options_favorite_place_to_train_liz[i];
        }

        const char* temp_options_rudeness_in_liz[5] = {
            "blood", "nature", "family", "soul", "heart"
        };
        for (int i = 0; i < 5; ++i) {
            options_rudeness_in_liz[i] = temp_options_rudeness_in_liz[i];
        }

        const char* temp_options_could_talk_about_liz[5] = {
            "training", "strength", "discipline", "fighting", "winning"
        };
        for (int i = 0; i < 5; ++i) {
            options_could_talk_about_liz[i] = temp_options_could_talk_about_liz[i];
        }

        const char* temp_options_enjoy_sharing_tips_liz[5] = {
            "training", "strength building", "discipline", "self-defense", "winning"
        };
        for (int i = 0; i < 5; ++i) {
            options_enjoy_sharing_tips_liz[i] = temp_options_enjoy_sharing_tips_liz[i];
        }

        const char* temp_good_gift_responses[5] = {
            "This is useful, thanks.",
            "You've got good taste.",
            "I can make use of this.",
            "Thanks, this will do.",
            "You chose well, thanks."
        };
        for (int i = 0; i < 5; ++i) {
            good_gift_responses[i] = temp_good_gift_responses[i];
        }

        const char* temp_bad_gift_responses[5] = {
            "What am I supposed to do with this?",
            "This isn't useful to me.",
            "I appreciate the thought, but this isn't for me.",
            "Thanks, but no thanks.",
            "Maybe someone else can use this."
        };
        for (int i = 0; i < 5; ++i) {
            bad_gift_responses[i] = temp_bad_gift_responses[i];
        }

        const char* temp_neutral_gift_responses[5] = {
            "Thanks for the gift.",
            "I appreciate it.",
            "This is nice, thank you.",
            "Thanks, this will do.",
            "I appreciate the gesture."
        };
        for (int i = 0; i < 5; ++i) {
            neutral_gift_responses[i] = temp_neutral_gift_responses[i];
        }
    }
};

class Layla_Data {
public:
    const char* layla_phrases[100];
    const char* layla_incomplete_phrases[20];
    const char* options_favorite_thing_layla[5];
    const char* options_best_part_of_day_layla[5];
    const char* options_narcissistic_since_layla[5];
    const char* options_learned_from_layla[5];
    const char* options_favorite_activity_layla[5];
    const char* options_love_smell_layla[5];
    const char* options_nothing_more_exciting_layla[5];
    const char* options_simple_life_layla[5];
    const char* options_favorite_season_layla[5];
    const char* options_believe_beauty_layla[5];
    const char* options_favorite_tool_layla[5];
    const char* options_home_is_layla[5];
    const char* options_take_pride_in_layla[5];
    const char* options_enjoy_seeing_reflection_layla[5];
    const char* options_best_memories_from_layla[5];
    const char* options_love_quiet_mornings_layla[5];
    const char* options_favorite_place_to_relax_layla[5];
    const char* options_narcissism_in_layla[5];
    const char* options_could_talk_about_layla[5];
    const char* options_enjoy_sharing_tips_layla[5];
    const char* good_gift_responses[5];
    const char* bad_gift_responses[5];
    const char* neutral_gift_responses[5];

    // Constructor
    Layla_Data() {
        const char* temp_layla_phrases[100] = {
            "Hey there, gorgeous!",
            "I'm just too beautiful for this world.",
            "Do you think I'm pretty? Of course, you do.",
            "Don't you just love my curves?",
            "I'm the most stunning girl on the farm.",
            "Can you believe how perfect I am?",
            "Why would anyone look at anything but me?",
            "I'm like, so amazing.",
            "Mirror, mirror, on the wall, who's the fairest of them all? Me, obviously.",
            "I'm just too pretty to be doing this.",
            "Do you want to see a real beauty? Look at me.",
            "My looks are my best asset.",
            "I'm like, totally the best.",
            "Have you seen anyone as gorgeous as me?",
            "I'm too fabulous for words.",
            "Being this beautiful is hard work.",
            "I'm like, the queen of this place.",
            "Everyone should admire me.",
            "I'm just too perfect.",
            "Why would anyone not love me?",
            "I'm the definition of beauty.",
            "Do you want to see something amazing? Look at me.",
            "I'm just too pretty for this.",
            "I'm the most stunning girl ever.",
            "Can you believe how perfect I am?",
            "I'm like, so fabulous.",
            "Why would anyone look at anything but me?",
            "I'm just too beautiful for this world.",
            "Do you think I'm pretty? Of course, you do.",
            "Don't you just love my curves?",
            "I'm the most gorgeous girl on the farm.",
            "Can you believe how amazing I am?",
            "Why would anyone not love me?",
            "I'm just too perfect.",
            "I'm the definition of beauty.",
            "Do you want to see something stunning? Look at me.",
            "I'm just too fabulous.",
            "I'm the queen of this place.",
            "Everyone should admire me.",
            "I'm just too amazing.",
            "Why would anyone not be obsessed with me?",
            "I'm the most gorgeous girl ever.",
            "Can you believe how perfect I am?",
            "I'm like, so fabulous.",
            "Why would anyone look at anything but me?",
            "I'm just too beautiful for this world.",
            "Do you think I'm pretty? Of course, you do.",
            "Don't you just love my curves?",
            "I'm the most stunning girl on the farm.",
            "Can you believe how amazing I am?",
            "Why would anyone not love me?",
            "I'm just too perfect.",
            "I'm the definition of beauty.",
            "Do you want to see something stunning? Look at me.",
            "I'm just too fabulous.",
            "I'm the queen of this place.",
            "Everyone should admire me.",
            "I'm just too amazing.",
            "Why would anyone not be obsessed with me?",
            "I'm the most gorgeous girl ever.",
            "Can you believe how perfect I am?",
            "I'm like, so fabulous.",
            "Why would anyone look at anything but me?",
            "I'm just too beautiful for this world.",
            "Do you think I'm pretty? Of course, you do.",
            "Don't you just love my curves?",
            "I'm the most stunning girl on the farm.",
            "Can you believe how amazing I am?",
            "Why would anyone not love me?",
            "I'm just too perfect.",
            "I'm the definition of beauty.",
            "Do you want to see something stunning? Look at me.",
            "I'm just too fabulous.",
            "I'm the queen of this place.",
            "Everyone should admire me.",
            "I'm just too amazing.",
            "Why would anyone not be obsessed with me?",
            "I'm the most gorgeous girl ever.",
            "Can you believe how perfect I am?",
            "I'm like, so fabulous.",
            "Why would anyone look at anything but me?",
            "I'm just too beautiful for this world.",
            "Do you think I'm pretty? Of course, you do.",
            "Don't you just love my curves?",
            "I'm the most stunning girl on the farm.",
            "Can you believe how amazing I am?",
            "Why would anyone not love me?",
            "I'm just too perfect.",
            "I'm the definition of beauty.",
            "Do you want to see something stunning? Look at me.",
            "I'm just too fabulous.",
            "I'm the queen of this place.",
            "Everyone should admire me.",
            "I'm just too amazing.",
            "Why would anyone not be obsessed with me?"
        };
        for (int i = 0; i < 100; ++i) {
            layla_phrases[i] = temp_layla_phrases[i];
        }

        const char* temp_layla_incomplete_phrases[20] = {
            "My favorite thing is",
            "The best part of my day is",
            "I've been narcissistic since",
            "I learned everything about beauty from",
            "My favorite activity is",
            "I love the smell of",
            "There's nothing more exciting than",
            "I enjoy the simple life of",
            "My favorite season is",
            "I believe beauty",
            "My favorite tool is",
            "Home is my",
            "I take pride in",
            "I enjoy seeing my reflection in",
            "My best memories are from",
            "I love the quiet mornings in",
            "My favorite place to relax is",
            "Narcissism is in my",
            "I could talk about",
            "I enjoy sharing tips about"
        };
        for (int i = 0; i < 20; ++i) {
            layla_incomplete_phrases[i] = temp_layla_incomplete_phrases[i];
        }

        const char* temp_options_favorite_thing_layla[5] = {
            "my looks", "my hair", "my curves", "my style", "myself"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_thing_layla[i] = temp_options_favorite_thing_layla[i];
        }

        const char* temp_options_best_part_of_day_layla[5] = {
            "looking in the mirror", "admiring myself", "getting compliments", "taking selfies", "flirting"
        };
        for (int i = 0; i < 5; ++i) {
            options_best_part_of_day_layla[i] = temp_options_best_part_of_day_layla[i];
        }

        const char* temp_options_narcissistic_since_layla[5] = {
            "I was born", "my teenage years", "forever", "I can remember", "always"
        };
        for (int i = 0; i < 5; ++i) {
            options_narcissistic_since_layla[i] = temp_options_narcissistic_since_layla[i];
        }

        const char* temp_options_learned_from_layla[5] = {
            "my reflection", "myself", "magazines", "social media", "compliments"
        };
        for (int i = 0; i < 5; ++i) {
            options_learned_from_layla[i] = temp_options_learned_from_layla[i];
        }

        const char* temp_options_favorite_activity_layla[5] = {
            "posing", "selfies", "flirting", "shopping", "admiring myself"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_activity_layla[i] = temp_options_favorite_activity_layla[i];
        }
        const char* temp_options_love_smell_layla[5] = {
           "perfume", "flowers", "my hair", "freshly baked cookies", "my lotion"
        };
        for (int i = 0; i < 5; ++i) {
            options_love_smell_layla[i] = temp_options_love_smell_layla[i];
        }

        const char* temp_options_nothing_more_exciting_layla[5] = {
            "getting compliments", "taking selfies", "admiring myself", "flirting", "shopping"
        };
        for (int i = 0; i < 5; ++i) {
            options_nothing_more_exciting_layla[i] = temp_options_nothing_more_exciting_layla[i];
        }

        const char* temp_options_simple_life_layla[5] = {
            "the farm", "the countryside", "the village", "the homestead", "the field"
        };
        for (int i = 0; i < 5; ++i) {
            options_simple_life_layla[i] = temp_options_simple_life_layla[i];
        }

        const char* temp_options_favorite_season_layla[5] = {
            "spring", "summer", "fall", "winter", "fashion season"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_season_layla[i] = temp_options_favorite_season_layla[i];
        }

        const char* temp_options_believe_beauty_layla[5] = {
            "is everything", "is power", "is life", "is essential", "makes the world better"
        };
        for (int i = 0; i < 5; ++i) {
            options_believe_beauty_layla[i] = temp_options_believe_beauty_layla[i];
        }

        const char* temp_options_favorite_tool_layla[5] = {
            "the mirror", "the brush", "the lipstick", "the camera", "the hairdryer"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_tool_layla[i] = temp_options_favorite_tool_layla[i];
        }

        const char* temp_options_home_is_layla[5] = {
            "my sanctuary", "my palace", "my world", "my beauty spot", "my paradise"
        };
        for (int i = 0; i < 5; ++i) {
            options_home_is_layla[i] = temp_options_home_is_layla[i];
        }

        const char* temp_options_take_pride_in_layla[5] = {
            "my looks", "my style", "my hair", "my smile", "my personality"
        };
        for (int i = 0; i < 5; ++i) {
            options_take_pride_in_layla[i] = temp_options_take_pride_in_layla[i];
        }

        const char* temp_options_enjoy_seeing_reflection_layla[5] = {
            "the mirror", "the water", "the window", "my phone", "the camera"
        };
        for (int i = 0; i < 5; ++i) {
            options_enjoy_seeing_reflection_layla[i] = temp_options_enjoy_seeing_reflection_layla[i];
        }

        const char* temp_options_best_memories_from_layla[5] = {
            "posing", "getting compliments", "winning beauty contests", "shopping", "being admired"
        };
        for (int i = 0; i < 5; ++i) {
            options_best_memories_from_layla[i] = temp_options_best_memories_from_layla[i];
        }

        const char* temp_options_love_quiet_mornings_layla[5] = {
            "the farm", "the countryside", "the garden", "the field", "the porch"
        };
        for (int i = 0; i < 5; ++i) {
            options_love_quiet_mornings_layla[i] = temp_options_love_quiet_mornings_layla[i];
        }

        const char* temp_options_favorite_place_to_relax_layla[5] = {
            "the garden", "the porch", "the meadow", "the hammock", "the barn"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_place_to_relax_layla[i] = temp_options_favorite_place_to_relax_layla[i];
        }

        const char* temp_options_narcissism_in_layla[5] = {
            "blood", "nature", "family", "soul", "heart"
        };
        for (int i = 0; i < 5; ++i) {
            options_narcissism_in_layla[i] = temp_options_narcissism_in_layla[i];
        }

        const char* temp_options_could_talk_about_layla[5] = {
            "my looks", "beauty tips", "fashion", "my style", "my hair"
        };
        for (int i = 0; i < 5; ++i) {
            options_could_talk_about_layla[i] = temp_options_could_talk_about_layla[i];
        }

        const char* temp_options_enjoy_sharing_tips_layla[5] = {
            "beauty", "fashion", "selfies", "posing", "flirting"
        };
        for (int i = 0; i < 5; ++i) {
            options_enjoy_sharing_tips_layla[i] = temp_options_enjoy_sharing_tips_layla[i];
        }

        const char* temp_good_gift_responses[5] = {
            "Oh my gosh, this is perfect!",
            "You really know what I like!",
            "Thank you, this is amazing!",
            "I absolutely love this, thanks!",
            "You're the best for giving me this!"
        };
        for (int i = 0; i < 5; ++i) {
            good_gift_responses[i] = temp_good_gift_responses[i];
        }

        const char* temp_bad_gift_responses[5] = {
            "What is this supposed to be?",
            "I don't need this.",
            "Thanks, but no thanks.",
            "Why would you give me this?",
            "Maybe someone else would like this."
        };
        for (int i = 0; i < 5; ++i) {
            bad_gift_responses[i] = temp_bad_gift_responses[i];
        }

        const char* temp_neutral_gift_responses[5] = {
            "Thanks for the gift.",
            "I appreciate it.",
            "This is nice, thank you.",
            "Thanks, this will do.",
            "I appreciate the gesture."
        };
        for (int i = 0; i < 5; ++i) {
            neutral_gift_responses[i] = temp_neutral_gift_responses[i];
        }
    }
};

class Rose_Data {
public:
    const char* rose_phrases[100];
    const char* rose_incomplete_phrases[20];
    const char* options_favorite_thing_rose[5];
    const char* options_best_part_of_day_rose[5];
    const char* options_kind_since_rose[5];
    const char* options_learned_from_rose[5];
    const char* options_favorite_flower_rose[5];
    const char* options_love_smell_rose[5];
    const char* options_nothing_more_peaceful_rose[5];
    const char* options_simple_life_rose[5];
    const char* options_favorite_season_rose[5];
    const char* options_believe_kindness_rose[5];
    const char* options_favorite_tool_rose[5];
    const char* options_home_is_rose[5];
    const char* options_take_pride_in_rose[5];
    const char* options_enjoy_seeing_happiness_rose[5];
    const char* options_best_memories_from_rose[5];
    const char* options_love_quiet_mornings_rose[5];
    const char* options_favorite_place_to_relax_rose[5];
    const char* options_innocence_in_rose[5];
    const char* options_could_talk_about_rose[5];
    const char* options_enjoy_sharing_tips_rose[5];
    const char* good_gift_responses[5];
    const char* bad_gift_responses[5];
    const char* neutral_gift_responses[5];

    // Constructor
    Rose_Data() {
        const char* temp_rose_phrases[100] = {
            "Hello! How are you today?",
            "Isn't it a beautiful day?",
            "The flowers are blooming so nicely.",
            "I love spending time in the garden.",
            "Kindness is the key to a happy life.",
            "I'm here to help if you need anything.",
            "Have you seen the new blossoms?",
            "It's wonderful to see you!",
            "The sun feels so warm and inviting.",
            "Every flower has its own beauty.",
            "I believe in spreading joy and love.",
            "Nature is such a wonderful gift.",
            "Let's make the world a better place together.",
            "The garden is my favorite place to be.",
            "I always find peace among the flowers.",
            "Would you like to join me for a walk?",
            "Smiles are the best medicine.",
            "Helping others brings me so much joy.",
            "I believe in the power of positivity.",
            "Each day is a new beginning.",
            "Let's take a moment to appreciate the beauty around us.",
            "There's magic in every sunrise.",
            "I love making new friends.",
            "Kind words can brighten anyone's day.",
            "The world needs more love and compassion.",
            "I find joy in the simple things in life.",
            "Would you like to see my garden?",
            "I'm so happy to see you!",
            "Nature always has a way of cheering me up.",
            "Let's spread happiness wherever we go.",
            "The beauty of flowers never ceases to amaze me.",
            "I hope you have a wonderful day!",
            "Being kind is never wasted.",
            "The garden is my sanctuary.",
            "I love to see people smile.",
            "Every day is a gift.",
            "I'm grateful for the little moments.",
            "Let's cherish the time we have together.",
            "I believe in making the world a kinder place.",
            "The smell of flowers always lifts my spirits.",
            "I'm here if you need a friend.",
            "Let's take care of each other.",
            "Happiness is found in the little things.",
            "The garden is a place of peace and tranquility.",
            "I love to share my flowers with others.",
            "There's always something to be thankful for.",
            "Let's spread a little sunshine today.",
            "Kindness costs nothing but means everything.",
            "I enjoy spending time with good company.",
            "The world is a beautiful place.",
            "I find joy in helping others.",
            "Every flower tells a story.",
            "Let's make today a good day.",
            "The garden is my happy place.",
            "I believe in the goodness of people.",
            "Nature has a way of healing the soul.",
            "I'm always here to lend a hand.",
            "Let's enjoy the beauty of the moment.",
            "The flowers are so vibrant and alive.",
            "I love the feeling of the sun on my face.",
            "Spreading joy is my favorite thing to do.",
            "Let's take a walk and enjoy the scenery.",
            "The world is full of wonders.",
            "I'm so glad we can share this time together.",
            "Happiness is contagious.",
            "The garden is where I feel most at peace.",
            "I believe in the power of love.",
            "Let's be kind to one another.",
            "Every day is a new adventure.",
            "I'm grateful for the beauty of nature.",
            "The flowers are so lovely this time of year.",
            "I enjoy making new friends.",
            "Let's take a moment to appreciate life.",
            "The garden is my little slice of heaven.",
            "I love to see the smiles of those I care about.",
            "Kindness is always in style.",
            "The world needs more happiness.",
            "I find peace in the garden.",
            "Let's make today special.",
            "The flowers are a reminder of life's beauty.",
            "I love sharing my joy with others.",
            "Nature's beauty is a gift to us all.",
            "I'm always here to offer a kind word.",
            "Let's enjoy the simple pleasures in life.",
            "The garden is my favorite place to be.",
            "I believe in spreading love and happiness.",
            "Every flower is unique and special.",
            "I'm grateful for the time we spend together.",
            "Let's take care of the world around us.",
            "The flowers bring me so much joy.",
            "I love to make people happy.",
            "Nature's beauty is a constant source of inspiration.",
            "I'm so glad we can enjoy this time together.",
            "Let's make the world a better place."
        };
        for (int i = 0; i < 100; ++i) {
            rose_phrases[i] = temp_rose_phrases[i];
        }

        const char* temp_rose_incomplete_phrases[20] = {
            "My favorite thing is",
            "The best part of my day is",
            "I've been kind since",
            "I learned everything about flowers from",
            "My favorite flower is",
            "I love the smell of",
            "There's nothing more peaceful than",
            "I enjoy the simple life of",
            "My favorite season is",
            "I believe kindness",
            "My favorite tool is",
            "Home is my",
            "I take pride in",
            "I enjoy seeing happiness in",
            "My best memories are from",
            "I love the quiet mornings in",
            "My favorite place to relax is",
            "Innocence is in my",
            "I could talk about",
            "I enjoy sharing tips about"
        };
        for (int i = 0; i < 20; ++i) {
            rose_incomplete_phrases[i] = temp_rose_incomplete_phrases[i];
        }

        const char* temp_options_favorite_thing_rose[5] = {
            "flowers", "gardening", "helping others", "spreading joy", "nature"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_thing_rose[i] = temp_options_favorite_thing_rose[i];
        }

        const char* temp_options_best_part_of_day_rose[5] = {
            "morning", "gardening", "seeing smiles", "helping others", "evening"
        };
        for (int i = 0; i < 5; ++i) {
            options_best_part_of_day_rose[i] = temp_options_best_part_of_day_rose[i];
        }

        const char* temp_options_kind_since_rose[5] = {
            "I was a child", "my earliest memories", "always", "forever", "I can remember"
        };
        for (int i = 0; i < 5; ++i) {
            options_kind_since_rose[i] = temp_options_kind_since_rose[i];
        }

        const char* temp_options_learned_from_rose[5] = {
            "my mother", "my grandmother", "my mentor", "my friends", "nature"
        };
        for (int i = 0; i < 5; ++i) {
            options_learned_from_rose[i] = temp_options_learned_from_rose[i];
        }

        const char* temp_options_favorite_flower_rose[5] = {
            "roses", "tulips", "daisies", "sunflowers", "lilies"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_flower_rose[i] = temp_options_favorite_flower_rose[i];
        }
        const char* temp_options_love_smell_rose[5] = {
            "roses", "freshly cut grass", "rain", "flowers", "spring"
        };
        for (int i = 0; i < 5; ++i) {
            options_love_smell_rose[i] = temp_options_love_smell_rose[i];
        }

        const char* temp_options_nothing_more_peaceful_rose[5] = {
            "a garden", "a quiet morning", "the sound of birds", "the smell of flowers", "a walk in nature"
        };
        for (int i = 0; i < 5; ++i) {
            options_nothing_more_peaceful_rose[i] = temp_options_nothing_more_peaceful_rose[i];
        }

        const char* temp_options_simple_life_rose[5] = {
            "the countryside", "the village", "the farm", "the garden", "nature"
        };
        for (int i = 0; i < 5; ++i) {
            options_simple_life_rose[i] = temp_options_simple_life_rose[i];
        }

        const char* temp_options_favorite_season_rose[5] = {
            "spring", "summer", "fall", "winter", "blooming season"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_season_rose[i] = temp_options_favorite_season_rose[i];
        }

        const char* temp_options_believe_kindness_rose[5] = {
            "is everything", "makes life better", "is the key to happiness", "is essential", "can change the world"
        };
        for (int i = 0; i < 5; ++i) {
            options_believe_kindness_rose[i] = temp_options_believe_kindness_rose[i];
        }

        const char* temp_options_favorite_tool_rose[5] = {
            "the watering can", "the spade", "the pruning shears", "the garden fork", "my hands"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_tool_rose[i] = temp_options_favorite_tool_rose[i];
        }

        const char* temp_options_home_is_rose[5] = {
            "my sanctuary", "my garden", "my happy place", "where the flowers are", "my haven"
        };
        for (int i = 0; i < 5; ++i) {
            options_home_is_rose[i] = temp_options_home_is_rose[i];
        }

        const char* temp_options_take_pride_in_rose[5] = {
            "my garden", "my kindness", "my flowers", "my work", "my patience"
        };
        for (int i = 0; i < 5; ++i) {
            options_take_pride_in_rose[i] = temp_options_take_pride_in_rose[i];
        }

        const char* temp_options_enjoy_seeing_happiness_rose[5] = {
            "people's faces", "my flowers", "the garden", "nature", "others"
        };
        for (int i = 0; i < 5; ++i) {
            options_enjoy_seeing_happiness_rose[i] = temp_options_enjoy_seeing_happiness_rose[i];
        }

        const char* temp_options_best_memories_from_rose[5] = {
            "the garden", "childhood", "spending time with family", "helping others", "nature walks"
        };
        for (int i = 0; i < 5; ++i) {
            options_best_memories_from_rose[i] = temp_options_best_memories_from_rose[i];
        }

        const char* temp_options_love_quiet_mornings_rose[5] = {
            "the garden", "the countryside", "the village", "the farm", "nature"
        };
        for (int i = 0; i < 5; ++i) {
            options_love_quiet_mornings_rose[i] = temp_options_love_quiet_mornings_rose[i];
        }

        const char* temp_options_favorite_place_to_relax_rose[5] = {
            "the garden", "the meadow", "the porch", "the park", "under a tree"
        };
        for (int i = 0; i < 5; ++i) {
            options_favorite_place_to_relax_rose[i] = temp_options_favorite_place_to_relax_rose[i];
        }

        const char* temp_options_innocence_in_rose[5] = {
            "my heart", "my nature", "my smile", "my actions", "my words"
        };
        for (int i = 0; i < 5; ++i) {
            options_innocence_in_rose[i] = temp_options_innocence_in_rose[i];
        }

        const char* temp_options_could_talk_about_rose[5] = {
            "flowers", "kindness", "nature", "the garden", "helping others"
        };
        for (int i = 0; i < 5; ++i) {
            options_could_talk_about_rose[i] = temp_options_could_talk_about_rose[i];
        }

        const char* temp_options_enjoy_sharing_tips_rose[5] = {
            "gardening", "kindness", "flower care", "nature", "helping others"
        };
        for (int i = 0; i < 5; ++i) {
            options_enjoy_sharing_tips_rose[i] = temp_options_enjoy_sharing_tips_rose[i];
        }

        const char* temp_good_gift_responses[5] = {
            "Oh, thank you so much! This is wonderful!",
            "You're so kind, I love it!",
            "This is perfect, thank you!",
            "I really appreciate this, it's lovely!",
            "You made my day, thank you!"
        };
        for (int i = 0; i < 5; ++i) {
            good_gift_responses[i] = temp_good_gift_responses[i];
        }

        const char* temp_bad_gift_responses[5] = {
            "Oh, um, thank you...",
            "I appreciate the thought, but...",
            "This is very kind of you, but I don't really need it.",
            "Thanks, but maybe someone else would enjoy this more.",
            "I appreciate the gesture, but it's not for me."
        };
        for (int i = 0; i < 5; ++i) {
            bad_gift_responses[i] = temp_bad_gift_responses[i];
        }

        const char* temp_neutral_gift_responses[5] = {
            "Thank you for the gift.",
            "I appreciate it.",
            "This is nice, thank you.",
            "Thanks, this is thoughtful.",
            "I appreciate the gesture, thank you."
        };
        for (int i = 0; i < 5; ++i) {
            neutral_gift_responses[i] = temp_neutral_gift_responses[i];
        }
    }
};

