//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/NSCoding-Protocol.h>
#import <FuseUI/NSCopying-Protocol.h>

@class MPPlaybackContext, MPUContentItemIdentifierCollection;
@protocol MusicEntityProviding, MusicEntityValueProviding;

@interface MusicEntityValueContext : NSObject <NSCoding, NSCopying>
{
    _Bool _wantsItemEntityValueProvider;
    _Bool _wantsItemGlobalIndex;
    _Bool _wantsItemIdentifierCollection;
    _Bool _wantsItemPlaybackContext;
    _Bool _wantsContainerDownloadInformationEntityProvider;
    _Bool _wantsContainerEntityValueProvider;
    _Bool _wantsContainerIdentifierCollection;
    _Bool _wantsContainerPlaybackContext;
    id <MusicEntityValueProviding> _containerEntityValueProvider;
    MPUContentItemIdentifierCollection *_containerIdentifierCollection;
    id <MusicEntityValueProviding> _itemEntityValueProvider;
    unsigned long long _itemGlobalIndex;
    MPUContentItemIdentifierCollection *_itemIdentifierCollection;
    MPPlaybackContext *_containerPlaybackContext;
    MPPlaybackContext *_itemPlaybackContext;
    id <MusicEntityProviding> _containerDownloadInformationEntityProvider;
}

@property(retain, nonatomic) id <MusicEntityProviding> containerDownloadInformationEntityProvider; // @synthesize containerDownloadInformationEntityProvider=_containerDownloadInformationEntityProvider;
@property(retain, nonatomic) MPPlaybackContext *itemPlaybackContext; // @synthesize itemPlaybackContext=_itemPlaybackContext;
@property(retain, nonatomic) MPPlaybackContext *containerPlaybackContext; // @synthesize containerPlaybackContext=_containerPlaybackContext;
@property(copy, nonatomic) MPUContentItemIdentifierCollection *itemIdentifierCollection; // @synthesize itemIdentifierCollection=_itemIdentifierCollection;
@property(nonatomic) unsigned long long itemGlobalIndex; // @synthesize itemGlobalIndex=_itemGlobalIndex;
@property(retain, nonatomic) id <MusicEntityValueProviding> itemEntityValueProvider; // @synthesize itemEntityValueProvider=_itemEntityValueProvider;
@property(copy, nonatomic) MPUContentItemIdentifierCollection *containerIdentifierCollection; // @synthesize containerIdentifierCollection=_containerIdentifierCollection;
@property(retain, nonatomic) id <MusicEntityValueProviding> containerEntityValueProvider; // @synthesize containerEntityValueProvider=_containerEntityValueProvider;
@property(nonatomic) _Bool wantsContainerPlaybackContext; // @synthesize wantsContainerPlaybackContext=_wantsContainerPlaybackContext;
@property(nonatomic) _Bool wantsContainerIdentifierCollection; // @synthesize wantsContainerIdentifierCollection=_wantsContainerIdentifierCollection;
@property(nonatomic) _Bool wantsContainerEntityValueProvider; // @synthesize wantsContainerEntityValueProvider=_wantsContainerEntityValueProvider;
@property(nonatomic) _Bool wantsContainerDownloadInformationEntityProvider; // @synthesize wantsContainerDownloadInformationEntityProvider=_wantsContainerDownloadInformationEntityProvider;
@property(nonatomic) _Bool wantsItemPlaybackContext; // @synthesize wantsItemPlaybackContext=_wantsItemPlaybackContext;
@property(nonatomic) _Bool wantsItemIdentifierCollection; // @synthesize wantsItemIdentifierCollection=_wantsItemIdentifierCollection;
@property(nonatomic) _Bool wantsItemGlobalIndex; // @synthesize wantsItemGlobalIndex=_wantsItemGlobalIndex;
@property(nonatomic) _Bool wantsItemEntityValueProvider; // @synthesize wantsItemEntityValueProvider=_wantsItemEntityValueProvider;
- (void).cxx_destruct;
- (void)resetOutputValues;
@property(readonly, nonatomic) id <MusicEntityValueProviding> entityValueProvider;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)configureWithMediaEntity:(id)arg1;

@end

