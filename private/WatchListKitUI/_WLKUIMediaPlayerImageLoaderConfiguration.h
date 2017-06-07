//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSURL;

@interface _WLKUIMediaPlayerImageLoaderConfiguration : NSObject
{
    _Bool _screenshot;
    NSNumber *_persistentidentifier;
    NSURL *_sourceURL;
    NSNumber *_storeIdentifier;
    struct CGSize _imageSize;
}

@property(copy, nonatomic) NSNumber *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(copy, nonatomic) NSNumber *persistentidentifier; // @synthesize persistentidentifier=_persistentidentifier;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic, getter=isScreenshot) _Bool screenshot; // @synthesize screenshot=_screenshot;
- (void).cxx_destruct;
- (void)_populateValuesFromQueryItems;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;

@end

