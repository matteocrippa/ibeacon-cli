# iBeacon CLI

Swiss Army Command Line Utility for working with iBeacons.

## Usage

```
ibeacon: iBeacon command line utility

      -h  --help             Display this message
      -v  --version          Display 'Version 1.0.0'
      -s  --scan             Scan for iBeacons
      -b  --broadcast        Broadcast as an iBeacon

    Scan options:
      -i  --interval         Time interval in seconds

    Broadcast options:
      -u  --uuid             Proximity UUID
      -M  --major            Major Identifier
      -m  --minor            Minor Identifier
      -p  --power            Advertised Power
```

### Build
Import into Xcode from git or local copy:
TODO:

Build and testing with command line arugment:
e.g.
Open Product>Scheme>Edit Scheme>
under Arguments tab of one of default schemes, add value to "Arguements Passed On lauch"

in this case, use "--scan"

Then open a iBeacon source, wait for commandline prompt:
{ranged: []} // no iBeacon signal was picked up.
{exited: { uuid: "60E967DE-BEBA-40AF-A695-07285976B938", major: 0, minor: 0, rssi: 0, power: -57 }} // a valid sample

### Install
Open >Window>Organizer:
Archive your project, you will get a folder looks like: ~/User/Name/Desktop/ibeacon 31-5-14 2.51 pm
cd to the folder, then copy it into your file system: sudo cp -r ./usr/ /usr/

### Examples

Broadcasting:

```
% ibeacon --broadcast --uuid 2F234454-CF6D-4A0F-ADF2-F4911BA9FFA6 --major 100 --minor 101
Broadcasting iBeacon UUID: 2F234454-CF6D-4A0F-ADF2-F4911BA9FFA6, Major: 100, Minor: 101, Power: -32
```

Scanning:

```
% ibeacon --scan
{ranged: []}
{entered: { uuid: "2F234454-CF6D-4A0F-ADF2-F4911BA9FFA6", major: 1, minor: 1, rssi: -61}}
{ranged: [{ uuid: "2F234454-CF6D-4A0F-ADF2-F4911BA9FFA6", major: 1, minor: 1, rssi: -61}]}
{ranged: [{ uuid: "2F234454-CF6D-4A0F-ADF2-F4911BA9FFA6", major: 1, minor: 1, rssi: 0}]}
{entered: { uuid: "2F234454-CF6D-4A0F-ADF2-F4911BA9FFA6", major: 9, minor: 8, rssi: -34}}
{ranged: [{ uuid: "2F234454-CF6D-4A0F-ADF2-F4911BA9FFA6", major: 1, minor: 1, rssi: -61},
          { uuid: "2F234454-CF6D-4A0F-ADF2-F4911BA9FFA6", major: 9, minor: 8, rssi: -34}]}
{ranged: [{ uuid: "2F234454-CF6D-4A0F-ADF2-F4911BA9FFA6", major: 1, minor: 1, rssi: 0},
          { uuid: "2F234454-CF6D-4A0F-ADF2-F4911BA9FFA6", major: 9, minor: 8, rssi: 0}]}
{ranged: [{ uuid: "2F234454-CF6D-4A0F-ADF2-F4911BA9FFA6", major: 1, minor: 1, rssi: -63},
          { uuid: "2F234454-CF6D-4A0F-ADF2-F4911BA9FFA6", major: 9, minor: 8, rssi: 0}]}
{exited:  { uuid: "2F234454-CF6D-4A0F-ADF2-F4911BA9FFA6", major: 9, minor: 8, rssi: 0}}
{ranged: [{ uuid: "2F234454-CF6D-4A0F-ADF2-F4911BA9FFA6", major: 1, minor: 1, rssi: -94}]}
```

# License

Copyright &copy; 2014 by Radius Networks

This software is licensed under an adapted BSD license, the Attribution Assurance License.  See the [LICENSE](LICENSE) for details.
