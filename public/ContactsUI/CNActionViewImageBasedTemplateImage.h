//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ContactsUI/CNActionViewTemplateImage-Protocol.h>

@class CNCache, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface CNActionViewImageBasedTemplateImage : NSObject <CNActionViewTemplateImage>
{
    CNCache *_imageCache;
    UIImage *_baseImage;
}

+ (id)cacheKeyForImage:(id)arg1 color:(id)arg2;
@property(readonly, nonatomic) UIImage *baseImage; // @synthesize baseImage=_baseImage;
@property(readonly, nonatomic) CNCache *imageCache; // @synthesize imageCache=_imageCache;
- (void).cxx_destruct;
- (id)uncachedImageWithColor:(id)arg1;
- (id)imageWithColor:(id)arg1;
- (id)initWithImage:(id)arg1 cache:(id)arg2;
- (id)initWithImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
