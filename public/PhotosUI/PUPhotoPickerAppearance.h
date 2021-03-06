//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, UIImage;

@interface PUPhotoPickerAppearance : NSObject
{
    _Bool _navigationBarIsTranslucent;
    long long _statusBarStyle;
    UIImage *_navigationBarBackgroundImage;
    long long _navigationBarStyle;
}

+ (id)photoPickerAppearanceFromViewController:(id)arg1;
+ (id)photoPickerAppearanceFromDictionary:(id)arg1;
@property(nonatomic) _Bool navigationBarIsTranslucent; // @synthesize navigationBarIsTranslucent=_navigationBarIsTranslucent;
@property(nonatomic) long long navigationBarStyle; // @synthesize navigationBarStyle=_navigationBarStyle;
@property(retain, nonatomic) UIImage *navigationBarBackgroundImage; // @synthesize navigationBarBackgroundImage=_navigationBarBackgroundImage;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)description;

@end

