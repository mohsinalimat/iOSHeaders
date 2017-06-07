//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SSMutableURLRequestProperties, SSURLRequestProperties, UIImage;

@interface SUPageSection : NSObject
{
    double _expirationTime;
    NSString *_identifier;
    UIImage *_image;
    long long _structuredPageType;
    NSString *_title;
    SSMutableURLRequestProperties *_urlRequestProperties;
    id _userInfo;
}

@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) SSURLRequestProperties *URLRequestProperties; // @synthesize URLRequestProperties=_urlRequestProperties;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long structuredPageType; // @synthesize structuredPageType=_structuredPageType;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) double expirationTime; // @synthesize expirationTime=_expirationTime;
- (void)_setURLBagKey:(id)arg1;
- (void)_setURL:(id)arg1;
@property(readonly, nonatomic) id segmentedControlItem;
- (_Bool)loadFromDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end

