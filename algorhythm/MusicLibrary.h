//
//  MusicLibrary.h
//  algorhythm
//
//  Created by Melissa on 12/8/15.
//  Copyright © 2015 Melissa Webster. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const kTitle;
extern NSString *const kDescription;
extern NSString *const kIcon;
extern NSString *const kLargeIcon;
extern NSString *const kBackgroundColor;
extern NSString *const kArtists;

@interface MusicLibrary : NSObject

@property (strong, nonatomic) NSArray *library;


@end
