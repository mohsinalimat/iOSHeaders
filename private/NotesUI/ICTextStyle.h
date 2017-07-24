//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ICTextStyle : NSObject
{
    unsigned int _ttStyle;
    NSDictionary *_attributes;
    NSString *_name;
}

+ (_Bool)autoListInsertionEnabled;
+ (void)setAutoListInsertionEnabled:(_Bool)arg1;
+ (id)settingsDescriptionForNamedStyle:(unsigned int)arg1;
+ (id)icaxStyleDescriptionForNamedStyle:(unsigned int)arg1;
+ (id)titleForNamedStyle:(unsigned int)arg1;
+ (void)setNoteDefaultNamedStyle:(unsigned int)arg1;
+ (unsigned int)noteDefaultNamedStyle;
+ (unsigned int)validatedNamedStyle:(unsigned int)arg1;
+ (id)numberedStyle;
+ (id)dashStyle;
+ (id)bulletStyle;
+ (id)fixedWidthStyle;
+ (id)bodyStyle;
+ (id)headingStyle;
+ (id)titleStyle;
+ (id)defaultTextStyles;
@property unsigned int ttStyle; // @synthesize ttStyle=_ttStyle;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *icaxStyleDescription;

@end

