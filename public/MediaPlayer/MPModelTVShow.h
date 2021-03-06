//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class MPModelTVShowCreator, NSString;

@interface MPModelTVShow : MPModelObject
{
    NSString *_title;
    NSString *_shortTitle;
    NSString *_editorNotes;
    NSString *_shortEditorNotes;
    NSString *_tagline;
    long long _episodesCount;
    MPModelTVShowCreator *_creator;
    CDUnknownBlockType _artworkCatalogBlock;
    CDUnknownBlockType _editorialArtworkCatalogBlock;
}

+ (id)__MPModelPropertyTVShowTagline__PROPERTY;
+ (id)__tagline__KEY;
+ (id)__MPModelPropertyTVShowEpisodeCount__PROPERTY;
+ (id)__episodesCount__KEY;
+ (id)__MPModelPropertyTVShowEditorialArtwork__PROPERTY;
+ (id)__editorialArtworkCatalogBlock__KEY;
+ (id)__MPModelPropertyTVShowArtwork__PROPERTY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__MPModelRelationshipTVShowCreator__PROPERTY;
+ (id)__creator__KEY;
+ (id)__MPModelPropertyTVShowShortEditorNotes__PROPERTY;
+ (id)__shortEditorNotes__KEY;
+ (id)__MPModelPropertyTVShowEditorNotes__PROPERTY;
+ (id)__editorNotes__KEY;
+ (id)__MPModelPropertyTVShowShortTitle__PROPERTY;
+ (id)__shortTitle__KEY;
+ (id)__MPModelPropertyTVShowTitle__PROPERTY;
+ (id)__title__KEY;
+ (id)kindWithSeasonKind:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType editorialArtworkCatalogBlock; // @synthesize editorialArtworkCatalogBlock=_editorialArtworkCatalogBlock;
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @synthesize artworkCatalogBlock=_artworkCatalogBlock;
@property(copy, nonatomic) MPModelTVShowCreator *creator; // @synthesize creator=_creator;
@property(nonatomic) long long episodesCount; // @synthesize episodesCount=_episodesCount;
@property(copy, nonatomic) NSString *tagline; // @synthesize tagline=_tagline;
@property(copy, nonatomic) NSString *shortEditorNotes; // @synthesize shortEditorNotes=_shortEditorNotes;
@property(copy, nonatomic) NSString *editorNotes; // @synthesize editorNotes=_editorNotes;
@property(copy, nonatomic) NSString *shortTitle; // @synthesize shortTitle=_shortTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)editorialArtworkCatalog;
- (id)artworkCatalog;

@end

