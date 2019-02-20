//
//  Copyright (c) 2014 RadiusNetworks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <IOBluetooth/IOBluetooth.h>
#import <CoreBluetooth/CoreBluetooth.h>

@interface Scanner : NSObject <CBCentralManagerDelegate>

@property CBCentralManager *centralManager;
@property NSTimer *timer;
@property NSMutableDictionary *scans;
@property double quietTime;

- (void)startWithTimeInterval:(double)interval;

@end
