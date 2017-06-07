//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSParsecCardSection.h>

@class NSArray, NSString, WBSParsecImageRepresentation;

@interface WBSParsecMovieCardSection : WBSParsecCardSection
{
    WBSParsecImageRepresentation *_imageRepresentation;
    WBSParsecImageRepresentation *_rottenTomatoesGlyphRepresentation;
    NSString *_rottenTomatoesText;
    NSArray *_sections;
    NSArray *_buyButtonSections;
}

+ (id)_specializedCardSectionSchema;
@property(readonly, copy, nonatomic) NSArray *buyButtonSections; // @synthesize buyButtonSections=_buyButtonSections;
@property(readonly, copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, copy, nonatomic) NSString *rottenTomatoesText; // @synthesize rottenTomatoesText=_rottenTomatoesText;
@property(readonly, nonatomic) WBSParsecImageRepresentation *rottenTomatoesGlyphRepresentation; // @synthesize rottenTomatoesGlyphRepresentation=_rottenTomatoesGlyphRepresentation;
@property(readonly, nonatomic) WBSParsecImageRepresentation *imageRepresentation; // @synthesize imageRepresentation=_imageRepresentation;
- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1;

@end

