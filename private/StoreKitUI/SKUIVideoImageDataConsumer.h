//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIImageDataConsumer.h>

@class SKUIColorScheme, UIColor;

@interface SKUIVideoImageDataConsumer : SKUIImageDataConsumer
{
    unsigned long long _allowedOrientations;
    UIColor *_backgroundColor;
    SKUIColorScheme *_colorScheme;
    struct CGSize _landscapeSize;
    struct CGSize _portraitSize;
}

@property(nonatomic) struct CGSize portraitSize; // @synthesize portraitSize=_portraitSize;
@property(nonatomic) struct CGSize landscapeSize; // @synthesize landscapeSize=_landscapeSize;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) unsigned long long allowedOrientations; // @synthesize allowedOrientations=_allowedOrientations;
- (void).cxx_destruct;
- (id)imageForImage:(id)arg1;
- (id)imageForColor:(id)arg1 orientation:(unsigned long long)arg2;

@end

