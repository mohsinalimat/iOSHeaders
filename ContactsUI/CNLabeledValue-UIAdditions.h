//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNLabeledValue.h>

@class NSString;

@interface CNLabeledValue (UIAdditions)
+ (id)builtinLabelsForProperty:(id)arg1;
+ (void)deleteCustomLabel:(id)arg1;
+ (id)allCustomLabels;
+ (id)allLabels;
+ (id)defaultLabels;
+ (id)localizedDisplayStringForLabel:(id)arg1 propertyName:(id)arg2;
+ (void *)addressBook;
@property(readonly, nonatomic) NSString *localizedLabel;
@end
